#include <iostream>

using namespace std;

int main(void){
    
    int defaultSalary = 50;
    int incentiveSalary = 0;

    while(incentiveSalary != -1){
        incentiveSalary = 0;
        cout<<"판매 금액을 만원 단위로 입력 (-1 to end) : ";
        cin>>incentiveSalary;
        switch(incentiveSalary){
            case -1:
                cout<<"프로그램을 종료합니다."<<endl;
            break;
            default:
                cout<<defaultSalary + incentiveSalary*0.12<<"만원 입니다."<<endl;
            break;
        }
    }

    return 0;
}