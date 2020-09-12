#include <iostream>

using namespace std;

int main(void){
    int num = 1020;
    /** num2 variable access address */
    int &num2 = num;

    num2 = 3047;
    cout<<"VAL : "<<num<<endl;
    cout<<"REF : "<<num2<<endl;

    cout<<"VAL : "<<&num<<endl;
    cout<<"REF : "<<&num2<<endl;

    return 0;
}