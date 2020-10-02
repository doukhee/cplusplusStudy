#include <iostream>

using namespace std;

class SoSimple{
    private:
        int num;
    public:
        SoSimple(int n):num(n){}
        SoSimple &AddNum(int n){
            num += n;
            return *this;
        }
        /** 일반 객체에서 실행 된다. */
        void SimpleFunc(){
            cout<<"Simple Func : "<<num<<endl;
        }
        /** Const 객체에서 실행 */
        void SimpleFunc() const{
            cout<<"Const Simple Func : "<<num<<endl;
        }
};

/** 객체를 const로 받는다 */
void YourFunc(const SoSimple &obj){
    obj.SimpleFunc();
}

int main(){
    SoSimple obj1(2);
    const SoSimple obj2(7);

    obj1.SimpleFunc();
    obj2.SimpleFunc();

    YourFunc(obj1);
    YourFunc(obj2);

    return 0;
}