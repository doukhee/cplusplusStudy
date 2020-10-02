#include <iostream>

using namespace std;

int SimpleObjCnt = 0;
int CmxObjCnt = 0;

class SoSimple{
    public:
        SoSimple(){
            SimpleObjCnt++;
            cout<<"Simple Object Counter : "<<SimpleObjCnt<<endl;
        }
};

class SoComplex{
    public:
        SoComplex(){
            CmxObjCnt++;
            cout<<"Simple Complex Counter : "<<CmxObjCnt<<endl;
        }
        SoComplex(SoComplex &copy){
            CmxObjCnt++;
            cout<<"Simple Complex Counter : "<<CmxObjCnt<<endl;
        }
};

int main(){
    SoSimple sim1;
    SoSimple sim2;

    SoComplex com1;
    SoComplex com2 = com1;
    SoComplex();
    return 0;
}