/**
 * static은 변수 선언 시 한번만 실행된다.
 * 범위를 벗어나도 소멸되지 않는다.
 * 
 */

#include <iostream>

using namespace std;

class SoSimple{
    private:
        static int SimObjCnt;
    public:
        SoSimple(){
            SimObjCnt++;
            cout<<"Simple Object Counter : "<<SimObjCnt<<endl;
        }
};

/** static variable Init */
int SoSimple::SimObjCnt = 0;

class SoComplex{
    private:
        static int CmxObjCnt;
    public:
        SoComplex(){
            CmxObjCnt++;
            cout<<"CmxObject Counter : "<<CmxObjCnt<<endl;
        }
        SoComplex(SoComplex &copy){
            CmxObjCnt++;
            cout<<"CmxObject Counter Copy :: "<<CmxObjCnt<<endl;
        }
};

/** static variable Init */
int SoComplex::CmxObjCnt = 0;

int main(){
    SoSimple sim1;
    SoSimple sim2;

    SoComplex cmx1;
    SoComplex cmx2 = cmx1;
    SoComplex();
    return 0;
}