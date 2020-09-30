#include <iostream>

using namespace std;

namespace CAR_CONST{
    enum{
        ID_LED = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

struct Car{
    char gamerID[CAR_CONST::ID_LED];
    int fuelGauge;
    int curSpeed;

    void SHowCarState(){
        cout<<"Owner ID : "<<gamerID<<endl;
        cout<<"fuel : "<<fuelGauge<<"%"<<endl;
        cout<<"cur speed : "<<curSpeed<<endl;
    }

    void Accel(){
        if(fuelGauge <= 0){
            return;
        }else{
            fuelGauge -= CAR_CONST::FUEL_STEP;
        }
        if((curSpeed+CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD){
            curSpeed = CAR_CONST::MAX_SPD;
            return ;
        }
        curSpeed += CAR_CONST::ACC_STEP;
    }

    void Break(){
        if(curSpeed < CAR_CONST::BRK_STEP){
            curSpeed = 0;
            return;
        }
        curSpeed -= CAR_CONST::BRK_STEP;
    }
};

int main(){
    Car run99 = {"run99", 100, 0};
    run99.Accel();
    run99.Accel();
    run99.SHowCarState();
    run99.Break();
    run99.SHowCarState();

    Car sped77 = {"sped77", 100, 0};
    sped77.Accel();
    sped77.Break();
    sped77.SHowCarState();
    return 0;
}