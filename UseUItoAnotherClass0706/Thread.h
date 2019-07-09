#pragma once
#include <QThread>
#include <CDataContainer.h>

class Thread : // Communicate with platform thread
    public QThread
{
    Q_OBJECT;

public:
    explicit Thread(QObject *parent = nullptr);
    void comPlatform(); // <- get과 set이 있음
    bool Stop;
    void run();
    //DataContainer -> get set
    // 쓰레드 자체의 함수 get set

signals: // 회면 업데이트
    void AorMChanged(int);
    void EStopChanged(int);
    void GearChanged(int);
    void SpeedChanged(int);
    void SteerChanged(int);
    void BreakChanged(int);
    void EncChanged(int);
    void AliveChanged(int);


public slots:

};