#include <iostream>
#include <cstring>

using namespace std;

class TwoNumber{
    private:
        int num1;
        int num2;
    public:
        TwoNumber(int num1, int num2){
            this->num1 = num1;
            this->num2 = num2;
        }
        /*
        TwoNumber(int n1, int n2):num1(n1), num2(n2){}
        */
       void ShowTwoNumer(){
           cout<<"num1 : "<<this->num1<<endl;
           cout<<"num2 : "<<this->num2<<endl;
       }
};

int main(){
    TwoNumber two(2, 4);
    two.ShowTwoNumer();
    return 0;
}