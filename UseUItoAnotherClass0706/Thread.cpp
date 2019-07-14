#include "Thread.h"
#include "CDataContainer.h"
#include "CComPlatform.h"
#include <QMutex>
#include <iostream>

using namespace std;

CDataContainer *dataContainer;

bool loopStatus = true;

//Thread::Thread (QObject *parent) :
//    QThread(parent)
//{
//	//comPlatform();
//}

void Thread::run()
{
    comPlatform();
}

void Thread::comPlatform()
{
	dataContainer = CDataContainer::getInstance();
    CComPlatform _serial(dataContainer);
    if (_serial.OpenPort(L"COM1"))
    {
        _serial.ConfigurePort(CBR_115200, 8, FALSE, NOPARITY, ONESTOPBIT);
        _serial.SetCommunicationTimeouts(0, 0, 0, 0, 0);
		cout << "Thread is running";
        while (loopStatus)
        {
            _serial.MyCommRead();
            _serial.MyCommWrite();
            // DataContainer.get -> ���Ϳ� �װ�
                emit(AorMChanged(dataContainer->getValue_PtoU_AorM()));
                emit(EStopChanged(dataContainer->getValue_PtoU_E_STOP()));
                emit(SpeedChanged(dataContainer->getValue_PtoU_SPEED()));
                emit(SteerChanged(dataContainer->getValue_PtoU_STEER()));
                emit(GearChanged(dataContainer->getValue_PtoU_GEAR()));
                emit(BreakChanged(dataContainer->getValue_PtoU_BREAK()));
                emit(EncChanged(dataContainer->getValue_PtoU_ENC()));

            //this_thread::sleep_for(100ms);
            this->msleep(100);
        }
    }
    else
    {
        cout << "not connected" << endl;
    }

}

void Thread::run() {
	cout << "running" << endl;
	comPlatform();
}
