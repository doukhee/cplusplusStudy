#include <iostream>

using namespace std;

/** 반환을 일반 integer타입을 반환한다. 그러므로 인자 주소갑이 들어와도 새로운 변수로 저장된다. */
int RefRetFunc(int &ref){
    ref++;
    return ref;
}

/** 지역 변수를 반환하여 함수가 종료시 지역 변수 삭제됨 그러므로 에러가 발생하게 된다. */
int &WrongRetFunc(int n){
    int num = 20;
    num += n;
    return num;
}

int main(){
    int num1 = 1;
    /** this is not num1 new variable */
    int num2 = RefRetFunc(num1);

    num1 += 1;
    num2 += 100;

    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;

    return 0;
}