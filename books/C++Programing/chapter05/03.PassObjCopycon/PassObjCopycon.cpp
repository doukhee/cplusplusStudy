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
        void ShowData(){
            cout<<"num : "<<num<<endl;
        }
};

void SimpleFuncObj(SoSimple oh){
    oh.ShowData();
}

int main(){
    SoSimple obj(7);
    cout<<"Function call before"<<endl;
    SimpleFuncObj(obj);
    cout<<"Function call after"<<endl;
    return 0;
}