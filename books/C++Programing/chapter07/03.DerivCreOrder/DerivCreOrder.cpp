#include <iostream>

using namespace std;

class SoBase{
    private:
        int baseNum;
    public:
        SoBase():baseNum(20){
            cout<<"SoBase()"<<endl;
        }
        SoBase(int n): baseNum(n){
            cout<<"SoBase(int n)"<<endl;
        }
        //void ShowBaseData(){
        void ShowBaseData() const{
            cout<<"Base Number : "<<baseNum<<endl;
        }
};

/** SoBase 상속 */
class SoDerived:public SoBase{
    private:
        int deriveNum;
    public:
        SoDerived() :deriveNum(30){
            cout<<"SoDerived()"<<endl;
        }
        SoDerived(int n):deriveNum(n){
            cout<<"SoDerived(int n)"<<endl;
        }
        SoDerived(int n1, int n2):SoBase(n1), deriveNum(n2){
            cout<<"SoDerived(int n1, int n2)"<<endl;
        }
        //void ShowDeriveData(){
        void ShowDeriveData() const{
            ShowBaseData();
            cout<<"Derive Number : "<<deriveNum<<endl;
        }
}; 


int main(){
    cout<<"case1...."<<endl;
    SoDerived dr1;
    cout<<"------------------"<<endl;
    cout<<"case2...."<<endl;
    SoDerived dr2(12);
    dr2.ShowDeriveData();
    cout<<"------------------"<<endl;
    cout<<"case3...."<<endl;
    SoDerived dr3(23, 24);
    dr3.ShowDeriveData();
    return 0;
}
