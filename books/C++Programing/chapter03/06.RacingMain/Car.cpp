#include <iostream>
#include <cstring>

#include "Car.h"

using namespace std;
using namespace CAR_CONST;

void Car::InitMembers(char *id, int fuel){
    strcpy(gamerID, id);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState(){
    cout<<"gamer ID : "<<gamerID<<endl;
    cout<<"fuel : "<<fuelGauge<<"%"<<endl;
    cout<<"cur speed : "<<curSpeed<<endl;
}

void Car::Accel(){
    if(fuelGauge <= 0){
        return;
    }else{
        fuelGauge -= FUEL_STEP;
    }

    if(curSpeed + ACC_STEP >= MAX_SPD){
        curSpeed = MAX_SPD;
        return;
    }
    curSpeed += ACC_STEP;
}

void Car::Break(){
    if(curSpeed < BRK_STEP){
        curSpeed = 0;
        return;
    }
    curSpeed -= BRK_STEP;
}