#pragma once
#include <QMutex>
#include "Thread.h"

class CDataContainer
{
private:

    //////////////////////////////
    //    Singleton Pattern     //
    //////////////////////////////

    // 생성자 - 외부에서 인스턴스를 생성할 수 없도록 private 영역에 정의하고 구현함
    CDataContainer() {};

    // 싱글턴 인스턴스가 생성되었는지 여부
    static bool instanceFlag;

    // 싱글턴 인스턴스
    static CDataContainer* instance;



    //////////////////////////////
    //    private 멤버 변수     //
    //////////////////////////////

    //UPPER to PCU (플랫폼에 보내는 값)
    int m_UtoP_AorM = 0;
    int m_UtoP_E_STOP = 0;
    int m_UtoP_GEAR = 0;
    int m_UtoP_SPEED = 0;
    int m_UtoP_STEER = 0;
    int m_UtoP_BREAK = 0;
    int m_UtoP_ALIVE = 0;

    //PCU to UPPER (플랫폼에서 받아오는 값)
    int m_PtoU_AorM = 0;
    int m_PtoU_E_STOP = 0;
    int m_PtoU_GEAR = 0;
    int m_PtoU_SPEED = 0;
    int m_PtoU_STEER = 0;
    int m_PtoU_BREAK = 0;
    int m_PtoU_ENC = 0;
    int m_PtoU_ALIVE = 0;


    // std::mutex 용 저장공간
    QMutex mtx_UtoP_AorM;
    QMutex mtx_UtoP_E_STOP;
    QMutex mtx_UtoP_GEAR;
    QMutex mtx_UtoP_SPEED;
    QMutex mtx_UtoP_STEER;
    QMutex mtx_UtoP_BREAK;
    QMutex mtx_UtoP_ALIVE;

    QMutex mtx_PtoU_AorM;
    QMutex mtx_PtoU_E_STOP;
    QMutex mtx_PtoU_GEAR;
    QMutex mtx_PtoU_SPEED;
    QMutex mtx_PtoU_STEER;
    QMutex mtx_PtoU_BREAK;
    QMutex mtx_PtoU_ENC;
    QMutex mtx_PtoU_ALIVE;

public:

    //////////////////////////////
    //    Singleton Pattern     //
    //////////////////////////////

    // 싱글턴 인스턴스를 반환할 멤버함수
    static CDataContainer* getInstance();

    // 소멸자, instanceFlag를 false로 변경
    virtual ~CDataContainer() {
        instanceFlag = false;
    };



    //////////////////////////////
    //     public 멤버 변수     //
    //////////////////////////////

    //UPPER to PCU (플랫폼에 보내는 값)
    int getValue_UtoP_AorM();
    int getValue_UtoP_E_STOP();
    int getValue_UtoP_GEAR();
    int getValue_UtoP_SPEED();
    int getValue_UtoP_STEER();
    int getValue_UtoP_BREAK();
    int getValue_UtoP_ALIVE();

    void setValue_UtoP_AorM(int value);
    void setValue_UtoP_E_STOP(int value);
    void setValue_UtoP_GEAR(int value);
    void setValue_UtoP_SPEED(int value);
    void setValue_UtoP_STEER(int value);
    void setValue_UtoP_BREAK(int value);
    void setValue_UtoP_ALIVE(int value);


    //PCU to UPPER (플랫폼에서 받아오는 값)
    int getValue_PtoU_AorM();
    int getValue_PtoU_E_STOP();
    int getValue_PtoU_GEAR();
    int getValue_PtoU_SPEED();
    int getValue_PtoU_STEER();
    int getValue_PtoU_BREAK();
    int getValue_PtoU_ENC();
    int getValue_PtoU_ALIVE();

    void setValue_PtoU_AorM(int value);
    void setValue_PtoU_E_STOP(int value);
    void setValue_PtoU_GEAR(int value);
    void setValue_PtoU_SPEED(int value);
    void setValue_PtoU_STEER(int value);
    void setValue_PtoU_BREAK(int value);
    void setValue_PtoU_ENC(int value);
    void setValue_PtoU_ALIVE(int value);

    //UPPER to PCU or PCU to UPPER 값 보여주기
    void show_UtoP();
    void show_PtoU();
};