#include <Windows.h>
#include <atlstr.h>
#include <stdlib.h>
#include "CComPlatform.h"
#include "CSerialPort.h"
#include "CDataContainer.h"
#include <chrono>
#include <thread>

using namespace std;

CComPlatform::CComPlatform(CDataContainer *_dataContainer)
{
    dataContainer = _dataContainer;
}

CComPlatform::~CComPlatform()
{
    ClosePort();
}

void CComPlatform::MyCommRead()
{
    BYTE* pByte = new BYTE[36];
    // 읽는데 성공하면 처리하고  
    if (ReadByte(pByte, 36))
    {
        int indx = 0;
        for (; indx < 36; indx++)
        {
            if (char(pByte[indx]) == 'S' && char(pByte[indx + 1]) == 'T' && char(pByte[indx + 2]) == 'X')
            {
                break;
            }
        }

        dataContainer->setValue_PtoU_AorM(pByte[indx + 3]);
        dataContainer->setValue_PtoU_E_STOP(pByte[indx + 4]);
        dataContainer->setValue_PtoU_GEAR(pByte[indx + 5]);

        int speed_now = 0;
        speed_now |= (int)((pByte[indx + 6]) & 0xff);
        speed_now |= (int)((pByte[indx + 7] << 8) & 0xff00);
        dataContainer->setValue_PtoU_SPEED(speed_now);

        int steer_now = 0;
        steer_now |= (int)((pByte[indx + 8]) & 0xff);
        steer_now |= (int)((pByte[indx + 9] << 8) & 0xff00);
        if (steer_now > 30000)
            steer_now = steer_now - 65536;
        dataContainer->setValue_PtoU_STEER(steer_now / 71);
        dataContainer->setValue_PtoU_BREAK(pByte[indx + 10]);

        int encorder_now = 0;
        encorder_now |= (int)((pByte[indx + 11]) & 0xff);
        encorder_now |= (int)((pByte[indx + 12] << 8) & 0xff00);
        encorder_now |= (int)((pByte[indx + 13] << 16) & 0xff0000);
        encorder_now |= (int)((pByte[indx + 14] << 24) & 0xff000000);
        dataContainer->setValue_PtoU_ENC(encorder_now);
        dataContainer->setValue_PtoU_ALIVE(pByte[indx + 15]);

    }

    delete pByte;
}

void CComPlatform::MyCommWrite()
{
    setWritePram(writeBuffer);
    for (int i = 0; i < 14; i++)
    {
        WriteByte(writeBuffer[i]);
    }
}

void CComPlatform::setWritePram(BYTE* writeBuffer)
{
    int count = dataContainer->getValue_UtoP_ALIVE();
    dataContainer->setValue_UtoP_ALIVE(++count);

    writeBuffer[0] = 0x53;
    writeBuffer[1] = 0x54;
    writeBuffer[2] = 0x58;
    writeBuffer[3] = (BYTE)(dataContainer->getValue_UtoP_AorM());
    writeBuffer[4] = (BYTE)(dataContainer->getValue_UtoP_E_STOP());
    writeBuffer[5] = (BYTE)(dataContainer->getValue_UtoP_GEAR());
    writeBuffer[6] = lower(dataContainer->getValue_UtoP_SPEED());  // lower가 큰놈. 
    writeBuffer[7] = upper(dataContainer->getValue_UtoP_SPEED());
    writeBuffer[8] = lower(dataContainer->getValue_UtoP_STEER());
    writeBuffer[9] = upper(dataContainer->getValue_UtoP_STEER());
    writeBuffer[10] = (BYTE)(dataContainer->getValue_UtoP_BREAK());
    writeBuffer[11] = (BYTE)((dataContainer->getValue_UtoP_ALIVE()) % 256);
    writeBuffer[12] = 0x0d;
    writeBuffer[13] = 0x0a;
}