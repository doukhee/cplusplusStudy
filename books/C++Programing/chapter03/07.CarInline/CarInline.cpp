#include <cstring>
#include "CarInline.h"

using namespace std;

void Car::InitMembers(char *id, int fuel){
    strcpy(gamerID, id);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::Accel(){
    if(fuelGauge <= 0){
        return;
    }else{
        fuelGauge -= FUEL_STEP;
    }

    if((curSpeed + ACC_STEP) >= MAX_SPD){
        curSpeed = MAX_SPD;
        return;
    }
    curSpeed += ACC_STEP;
}

