#pragma once
#include <QThread>
#include <CDataContainer.h>

class Thread : // Communicate with platform thread
    public QThread
{
    Q_OBJECT;

public:
    explicit Thread(QObject *parent = nullptr);
    void comPlatform(); // <- get�� set�� ����
    bool Stop;
    void run();
    //DataContainer -> get set
    // ������ ��ü�� �Լ� get set

signals: // ȸ�� ������Ʈ
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