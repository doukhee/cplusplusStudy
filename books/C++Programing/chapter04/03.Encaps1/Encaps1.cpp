#include <iostream>

using namespace std;

class SinvelCap{
    public:
        void Take() const{
            cout<<"콧물이 싹 ! 납니다."<<endl;
        }
};

class SnezeCap{
    public:
        void Take() const{
            cout<<"재채기가 멎습니다"<<endl;
        }
};

class SnuffleCap{
    public:
        void Take() const{
            cout<<"코가 뻥 뚫립니다."<<endl;
        }
};

class ColdPatient{
    public:
        /** parameter 에 const를 한 이유는 class에 const가 포함되어 있기 때문에 class의 변화를 안준다는 의미의 function 뒤에 const */
        void TakeSinvelCap(const SinvelCap &cap) const{
            cap.Take();
        }
        void TakeSneezeCap(const SnezeCap &cap) const{
            cap.Take();
        }
        void TakeSnuffleCap(const SnuffleCap &cap) const{
            cap.Take();
        }
};

int main(){
    SinvelCap scap;
    SnezeCap zcap;
    SnuffleCap ncap;
    ColdPatient sufferer;
    sufferer.TakeSinvelCap(scap);
    sufferer.TakeSneezeCap(zcap);
    sufferer.TakeSnuffleCap(ncap);
    return 0;
}