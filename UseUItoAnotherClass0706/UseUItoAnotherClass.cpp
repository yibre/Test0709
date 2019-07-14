#include "UseUItoAnotherClass.h"
#include "CDataContainer.h"
#include <iostream>

UseUItoAnotherClass::UseUItoAnotherClass(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	dataContainer = CDataContainer::getInstance();
    //platformComThread = new Thread(this);
	Thread *platformComThread = new Thread;
	platformComThread->start();
	std::cout << "여기가 문젠가" << std::endl;

	//platformComThread(&comPlatform)
    connect(platformComThread, SIGNAL(AorMChanged(int)), this, SLOT(onAorMChanged(int)));
    connect(platformComThread, SIGNAL(EStopChanged(int)), this, SLOT(onEStopChanged(int)));
    connect(platformComThread, SIGNAL(GearChanged(int)), this, SLOT(onGearChanged(int)));
    connect(platformComThread, SIGNAL(SpeedChanged(int)), this, SLOT(onSpeedChanged(int)));
    connect(platformComThread, SIGNAL(SteerChanged(int)), this, SLOT(onSteerChanged(int)));
    connect(platformComThread, SIGNAL(BreakChanged(int)), this, SLOT(onBreakChanged(int)));
    connect(platformComThread, SIGNAL(EncChanged(int)), this, SLOT(onEncChanged(int)));
    QObject::connect(ui.pushButton_6, SIGNAL(clicked()), this, SLOT(select_gear_clicked()));
	QObject::connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(show_status()));
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(go_forward()));

	//QObject::connect(ui.push)

    ui.comboBox->addItem("front");
    ui.comboBox->addItem("back");

    
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

void UseUItoAnotherClass::show_status() {
	dataContainer->show_PtoU();
	dataContainer->show_UtoP();
}

void UseUItoAnotherClass::go_forward() {
	dataContainer->setValue_UtoP_SPEED(dataContainer->getValue_UtoP_SPEED() + 1);
}

/*
void UseUItoAnotherClass::Onclicked()
{
   */ 