#include <iostream>

/** num1 default value is 1, num2 default value is 2 */
int Adder(int num1 = 1, int num2 = 2){
    return num1 + num2;
}

int main(void){
    std::cout<<Adder()<<std::endl;
    std::cout<<Adder(5)<<std::endl;
    std::cout<<Adder(3, 5)<<std::endl;
    return 0;
}