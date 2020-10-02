#include <iostream>

using namespace std;

class SoSimple{
    public:
        static int simObjCnt;
        
        SoSimple(){
            simObjCnt++;
        }
};

/** static variable init */
int SoSimple::simObjCnt = 0;

int main(){
    cout<<"Simple Object Counter : "<<SoSimple::simObjCnt<<endl;
    SoSimple sim1;
    SoSimple sim2;

    cout<<"Simple Object Counter : "<<SoSimple::simObjCnt<<endl;
    cout<<"Simple Object Counter : "<<sim1.simObjCnt<<endl;
    cout<<"Simple Object Counter : "<<sim2.simObjCnt<<endl;
    
    return 0;
}