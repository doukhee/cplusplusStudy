#ifndef __CARINLINE_H__
#define __CARINLINE_H__

#include <iostream>

using namespace std;

enum CAR_CONST{
    ID_LEN = 20,
    MAX_SPD = 200,
    FUEL_STEP = 2,
    ACC_STEP = 10,
    BRK_STEP = 10
};

class Car{
    private:
        char gamerID[ID_LEN];
        int fuelGauge;
        int curSpeed;
    public:
        void InitMembers(char *id, int fuel);
        void ShowCarState();
        void Accel();
        void Break();
};

inline void Car::ShowCarState(){
    cout<<"gamer ID : "<<gamerID<<endl;
    cout<<"fuel : "<<fuelGauge<<endl;
    cout<<"cur Speed : "<<curSpeed<<"km/s"<<endl;
}

inline void Car::Break(){
    if(curSpeed < BRK_STEP){
        curSpeed = 0;
        return;
    }
    curSpeed -= BRK_STEP;
}

#endif