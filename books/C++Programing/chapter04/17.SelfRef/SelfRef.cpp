#include <iostream>

using namespace std;

class SelfRef{
    private:
        int num;
    public:
        SelfRef(int n):num(n){
            cout<<"Object Create"<<endl;
        }
        SelfRef &Addr(int n){
            num += n;
            return *this;
        }
        SelfRef &ShowTowNumber(){
            cout<<"num : "<<num<<endl;
            return *this;
        }
};


int main(){
    SelfRef obj(3);
    SelfRef &ref = obj.Addr(2);

    obj.ShowTowNumber();
    ref.ShowTowNumber();

    ref.Addr(1).ShowTowNumber().Addr(2).ShowTowNumber();
    return 0;
}