#include <iostream>

using namespace std;

class SoSimple{
    private:
        int num;
    public:
        SoSimple(int n):num(n){

        }
        SoSimple &AddNum(int n){
            num += n;
            return *this;
        }
        void ShowData() const{
            cout<<"num : "<<num<<endl;
        }

};

int main(){
    
    const SoSimple obj(7);
    /** AddNum 함수를 호출하는 방법 */
    SoSimple obj2(7);
    SoSimple obj3 = obj2.AddNum(20);
    /** 함수가 아니므로 호출이 불가능 하다. */
    //obj.AddNum(20);
    obj.ShowData();
    /** 원본 class도 변경이 된다. */
    obj2.ShowData();
    obj3.ShowData();
    return 0;
}