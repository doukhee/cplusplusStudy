#include <iostream>

using namespace std;

int &RefRetFuncOne(int &ref){
    ref++;
    return ref;
}

int main(){
    /** num1 variable value is 1 */
    int num1 = 1;
    /** normal variable It is new variable 2 */
    /** 일반 변수로 받았기 때문에 num1과 동일시 되는 것이 아니라 새로운 변수로 선언이 된다. */
    int num2 = RefRetFuncOne(num1);
    /** num1 = 3 */
    num1 += 1;
    /** num2 = 102 */
    num2 += 100;

    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;

    return 0;
}