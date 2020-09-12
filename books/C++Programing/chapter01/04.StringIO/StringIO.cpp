#include <iostream>

int main(void){
    /** char array variable */
    char name[100];
    char lang[200];

    std::cout<<"what is your name ? : ";
    std::cin>>name;

    std::cout<<"what is your favorite programing language ? : ";
    std::cin>>lang;

    std::cout<<"my name is "<<name<<std::endl;
    std::cout<<"my favorite language is "<<lang<<std::endl;
    
    return 0;
}