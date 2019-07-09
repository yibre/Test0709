#include "UseUItoAnotherClass.h"
#include "CDataContainer.h"
#include <iostream>

UseUItoAnotherClass::UseUItoAnotherClass(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    platformComThread = new Thread(this);
	platformComThread->start();
	//platformComThread(&comPlatform)
    connect(platformComThread, SIGNAL(AorMChanged(int)), this, SLOT(onAorMChanged(int)));
    connect(platformComThread, SIGNAL(EStopChanged(int)), this, SLOT(onEStopChanged(int)));
    connect(platformComThread, SIGNAL(GearChanged(int)), this, SLOT(onGearChanged(int)));
    connect(platformComThread, SIGNAL(SpeedChanged(int)), this, SLOT(onSpeedChanged(int)));
    connect(platformComThread, SIGNAL(SteerChanged(int)), this, SLOT(onSteerChanged(int)));
    connect(platformComThread, SIGNAL(BreakChanged(int)), this, SLOT(onBreakChanged(int)));
    connect(platformComThread, SIGNAL(EncChanged(int)), this, SLOT(onEncChanged(int)));
    QObject::connect(ui.pushButton_6, SIGNAL(clicked()), this, SLOT(select_gear_clicked()));
    //QObject::connect(ui.push)

    ui.comboBox->addItem("front");
    ui.comboBox->addItem("back");

    dataContainer = CDataContainer::getInstance();
}

void UseUItoAnotherClass::onAorMChanged(int Number)
{
    ui.lcdNumber->display(Number);
}

void UseUItoAnotherClass::onEStopChanged(int Number)
{
    ui.lcdNumber_2->display(Number);
}

void UseUItoAnotherClass::onGearChanged(int Number)
{
    ui.lcdNumber_3->display(Number);
}

void UseUItoAnotherClass::onSpeedChanged(int Number)
{
    ui.lcdNumber_4->display(Number);
}

void UseUItoAnotherClass::onSteerChanged(int Number)
{
    ui.lcdNumber_5->display(Number);
}

void UseUItoAnotherClass::onBreakChanged(int Number)
{
    ui.lcdNumber_6->display(Number);
}

void UseUItoAnotherClass::onEncChanged(int Number)
{
    ui.lcdNumber_7->display(Number);
}

void UseUItoAnotherClass::select_gear_clicked()
{
    QString qs;
    qs = ui.comboBox->currentText();
    if (qs == "front") { dataContainer->setValue_UtoP_GEAR(0); }
    else { dataContainer->setValue_UtoP_GEAR(2); }
    int temp = dataContainer->getValue_UtoP_GEAR();
    std::cout << temp << std::endl;
}

/*
void UseUItoAnotherClass::Onclicked()
{
   */ 