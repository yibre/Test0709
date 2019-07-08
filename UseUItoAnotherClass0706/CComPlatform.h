#pragma once
#include "CSerialPort.h"
#include "CDataContainer.h"
#include "Thread.h"

class CComPlatform :
    public CSerialPort
{
private:
    CDataContainer *dataContainer;
    BYTE writeBuffer[14];
    BYTE upper(int n) { return (BYTE)((n) & 0xff); }
    BYTE lower(int n) { return (BYTE)((n >> 8) & 0xff); }
    int f_mode = 1;
    int f_Estop = 0;
    int f_gear = 0;
    int f_speed = 20;
    int f_steer = 0;  //steer ¹Ý´ë·Î³ª¿È
    int f_brake = 0;
    void setWritePram(BYTE* writeBuffer);

public:
    CComPlatform(CDataContainer *dataContainer);
    ~CComPlatform();
    void MyCommRead();
    void MyCommWrite();
};