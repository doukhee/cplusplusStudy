#include <iostream>

using namespace std;

class BaseOne{
    public:
        void SimpleFuncOne(){
            cout<<"BaseOne"<<endl;
        }
};

class BaseTwo{
    public: 
        void SimpleFuncTwo(){
            cout<<"Base Two"<<endl;
        }
};

class MultDerived:public BaseOne, protected BaseTwo{
    public:
        void ComplexFunc(){
            SimpleFuncOne();
            SimpleFuncTwo();
        }
};

int main(){
    MultDerived mdr;
    mdr.ComplexFunc();
    return 0;
}