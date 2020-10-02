#include <iostream>

using namespace std;

class SoSimple{
    private:
        int num1;
        int num2;
    public:
        SoSimple(int n1, int n2):num1(n1), num2(n2){
            
        }
        /** 원본 변경을 막기 위한 const 예약어 사용 */
        /** constructor 앞에 explicit 예약어를 사용할 시에 = 로 대입을 못하게 된다. */
        SoSimple(const SoSimple &copy):num1(copy.num1), num2(copy.num2){
            cout<<"Called SoSimple(SoSimple &copy)"<<endl;
        }
        void ShowSimpleData(){
            cout<<"num1 : "<<num1<<endl;
            cout<<"num2 : "<<num2<<endl;
        }
};

int main(){
    SoSimple sim1(15, 30);
    cout<<"Create and Init before"<<endl;
    SoSimple sim2 = sim1;
    //SoSimple sim2(sim1);
    cout<<"Create and Init After"<<endl;
    sim2.ShowSimpleData();
    return 0;
}