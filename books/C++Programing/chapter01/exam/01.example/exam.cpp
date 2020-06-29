#include <iostream>

int main(void){
    
    int result = 0;

    for(int i = 0; i < 5; i++){
        int value = 0;
        std::cout<<i+1<<"번째 정수 입력 : ";
        std::cin>>value;
        result += value;       
    }
    std::cout<<"result : "<<result<<std::endl;
    return 0;
}