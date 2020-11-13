#include <iostream>

using namespace std;

class First{
    private:
        char *strOne;
    public:
        First(char *str){
            strOne = new char[strlen(str + 1)];
        }
        ~First(){
        /** 가상 함수로 소멸자를 해주어야 메모리 누수가 생기지 않는다. */
        //virtual ~First(){
            cout<<"~First()"<<endl;
            delete []strOne;
        }
};

class Second: public First{
    private:
        char *strTwo;
    public:
        Second(char *str1, char *str2):First(str1){
            strTwo = new char[strlen(str2 + 1)];
        }
        ~Second(){
        /** 가상 함수로 소멸자를 해주어야 메모리 누수가 생기지 않는다. */
        //virtual ~Second(){
            cout<<"~Second()"<<endl;
            delete []strTwo;
        }
};

int main(){
    First *ptr = new Second("simple", "complex");
    delete ptr;
    return 0;
}