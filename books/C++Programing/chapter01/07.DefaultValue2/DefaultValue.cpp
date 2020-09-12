/**
 * 함수의 default 값을 설정할 때, 오른쪽은 항상 정의 해야한다.
 * 도중 도중에 설정을 하ㅏ지 못하고 오른쪽으로 연속성 있게 값을 설정해야한다.
 * ex)
 *  parameter(int num1, int num2=3, int num3, int num4=5) (X)
 *  parameter(int num1, int num2=4, int num3, int num4) (X)
 *  parameter(int num1, int num2=4, int num3=3, int num4=5) (O)
 * 
 */

#include <iostream>

using namespace std;

int Adder(int num1 = 1, int num2 = 3);

int main(void){
    cout<<Adder()<<endl;
    cout<<Adder(5)<<endl;
    cout<<Adder(3, 5)<<endl;
    return 0;
}

int Adder(int num1, int num2){
    return num1 + num2;
}