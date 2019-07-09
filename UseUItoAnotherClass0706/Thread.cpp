#include "Thread.h"
#include "CDataContainer.h"
#include "CComPlatform.h"
#include <QMutex>
#include <iostream>

using namespace std;

CDataContainer *dataContainer;

bool loopStatus = true;

Thread::Thread(QObject *parent) :
    QThread(parent)
{

}

void Thread::run()
{
    comPlatform();
}

void Thread::comPlatform()
{
    CComPlatform _serial(dataContainer);
    if (_serial.OpenPort(L"COM4"))  
    { 
        _serial.ConfigurePort(CBR_115200, 8, FALSE, NOPARITY, ONESTOPBIT);
        _serial.SetCommunicationTimeouts(0, 0, 0, 0, 0);

        while (loopStatus)
        {
            _serial.MyCommRead();
            _serial.MyCommWrite();
            // DataContainer.get -> º¤ÅÍ¿¡ ½×°í
            {
                emit(AorMChanged(dataContainer->getValue_PtoU_AorM()));
                emit(EStopChanged(dataContainer->getValue_PtoU_E_STOP()));
                emit(SpeedChanged(dataContainer->getValue_PtoU_SPEED()));
                emit(SteerChanged(dataContainer->getValue_PtoU_STEER()));
                emit(GearChanged(dataContainer->getValue_PtoU_BREAK()));
                emit(BreakChanged(dataContainer->getValue_PtoU_BREAK()));
                emit(EncChanged(dataContainer->getValue_PtoU_ENC()));
                emit(AliveChanged(dataContainer->getValue_UtoP_ALIVE()));
            }
            //this_thread::sleep_for(100ms);
            this->msleep(100);
        }
    }
    else
    {
        cout << "not connected" << endl;
    }

}
