#include <iostream>

using namespace std;

class SoSimple{
    private:
        int num;
    public: 
        SoSimple(int n):num(n){}
        SoSimple(const SoSimple &copy):num(copy.num){
            cout<<"Called SoSimple(SoSimple &copy)"<<endl;
        }
        SoSimple &AddNum(int n){
            num += n;
            /** 자기 자신의 포인터 반환 */
            return *this;
        }
        void ShowData(){
            cout<<"num : "<<num<<endl;
        }
};

/** Object를 복사하여 복사된 Object를 반환 인자로 받은 Object랑 임시 Object가 생성이 된다. */
SoSimple SimpleFuncObj(SoSimple ob){
    cout<<"return before"<<endl;
    return ob;
}

int main(){
    SoSimple obj(7);
    //SoSimple obj2 = SimpleFuncObj(obj).AddNum(30);
    SimpleFuncObj(obj).AddNum(30).ShowData();
    obj.ShowData();
    //obj2.ShowData();
    return 0;
}