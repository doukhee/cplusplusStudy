/**
 * 함수 내에서 정의된 함수만 호출 가능
 */
#include <iostream>

using namespace std;

class First{
    public:
        void FirstFunc(){
            cout<<"FirstFunc()"<<endl;
        }
        virtual void SimpleFunc(){
            cout<<"First's SimpleFunc()"<<endl;
        }
        
};

class Second:public First{
    public:
        void SecondFunc(){
            cout<<"SecondFunc()"<<endl;
        }
        virtual void SimpleFunc(){
            cout<<"Second's SimpleFunc()"<<endl;
        }

};

class Third:public Second{
    public:
        void ThirdFunc(){
            cout<<"ThirdFunc()"<<endl;
        }
        virtual void SimpleFunc(){
            cout<<"Third's SimpleFunc()"<<endl;
        }
        
};

int main(){
    /** 객체 생성 */
    Third obj;
    obj.FirstFunc();
    obj.SecondFunc();
    obj.ThirdFunc();
    obj.SimpleFunc();
 
    /** call by reference */
    /** Second로 casting */
    Second &sref = obj;
    sref.FirstFunc();
    sref.SecondFunc();
    sref.SimpleFunc();
 
    /** call by reference */
    /** First로 casting */
    First &fref = obj;
    fref.FirstFunc();
    fref.SimpleFunc();
 
    return 0;
}