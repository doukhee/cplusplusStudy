#include <iostream>

/** 어느 namespcae 의 기능을 쓰는지 다 나타내지 않고, 함수 원형으로 사용하겠다는 의미 */
using std::cin;
using std::cout;
using std::endl;

int main(void){
    int num = 20;
    cout<<"Hello World!"<<endl;
    cout<<"Hello "<<"World!"<<endl;
    cout<<num<<' '<<'A';
    cout<<' '<<3.14<<endl;
    return 0;
}