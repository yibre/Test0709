#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_UseUItoAnotherClass.h"
#include "Thread.h"
#include "CDataContainer.h"

class UseUItoAnotherClass : public QMainWindow
{
    Q_OBJECT

public:
    explicit UseUItoAnotherClass(QWidget *parent = Q_NULLPTR);
    Thread *platformComThread;
    CDataContainer *dataContainer;

public slots:
    void onAorMChanged(int);
    void onEStopChanged(int);
    void onGearChanged(int);
    void onSpeedChanged(int);
    void onBreakChanged(int);
    void onSteerChanged(int);
    void onEncChanged(int);
    /// absorb signal form Thread

private slots: /// 버튼 클릭 함수
    //void on_Estop_clicked();
    void select_gear_clicked();
    //void Onclicked();

private:
    Ui::UseUItoAnotherClassClass ui;
};
