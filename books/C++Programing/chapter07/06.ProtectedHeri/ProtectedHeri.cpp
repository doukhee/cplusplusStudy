#include <iostream>

using namespace std;

class Base{
    private:
        int num1;
    protected:
        int num2;
    public:
        int num3;
        Base():num1(1), num2(2), num3(3){}
};

class Dericed: protected Base{
    public:
        int GetNum3() const{
            return num3;
        }
};

int main(){
    Dericed drv;
    /** compiler error */
    //cout<<drv.num3<<endl;
    cout<<drv.GetNum3()<<endl;

    return 0;
}