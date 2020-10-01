#include <iostream>
#include <cstring>

using namespace std;

class SoSimple{
    private:
        int num;
    public:
        SoSimple(int n):num(n){
            cout<<"num : "<<num<<endl;
            cout<<"address : "<<this<<endl;
        }
        void ShowSimpleData(){
            cout<<"num : "<<num<<endl;
        }
        SoSimple *GetThisPointer(){
            return this;
        }
};

int main(){
    SoSimple sim(100);
    SoSimple *ptr1 = sim.GetThisPointer();
    cout<<"ptr : "<<ptr1<<", ";
    ptr1->ShowSimpleData();
    return 0;
}