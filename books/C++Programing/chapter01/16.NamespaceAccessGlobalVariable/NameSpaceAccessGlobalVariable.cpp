#include <iostream>

using namespace std;

int value = 100;

namespace Test{
    void SimpleFunc(void){
        int value = 20;
        value += 3;
        /** change global variable */
        ::value += 7;
        cout<<"local value : "<<value<<endl;
        cout<<"global value : "<<::value<<endl;
    }
}

int main(void){
    int value = 10;
    Test::SimpleFunc();
    value += 3;
    /** Access global variable */
    ::value = 100;
    ::value += 10;
    cout<<"main local value : "<<value<<endl;
    cout<<"main global value : "<<::value<<endl;
    return 0;
}