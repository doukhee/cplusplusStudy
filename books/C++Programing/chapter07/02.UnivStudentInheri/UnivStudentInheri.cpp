#include <iostream>
#include <cstring>

using namespace std;

class Person{
    private:
        int age;
        char name[20];
    public:
        Person(int myage, char *myName):age(myage){
            strcpy(name, myName);
        }
        void WhatYourName() const{
            cout<<"My name is "<<name<<endl;
        }
        void HowOldAreYou() const{
            cout<<"I'm "<<age<<" years old"<<endl;
        }
};

class UnivStudent:Person{
    private:
        char major[50];
    public:
        UnivStudent(char *myName, int myAge, char *myMajor):Person(myAge, myName){
            strcpy(major, myMajor);
        }
        void WhoAreYou() const{
            WhatYourName();
            HowOldAreYou();
            cout<<"my major is "<<major<<endl<<endl;
        }
};

int main(){
    UnivStudent ustd1("Lee", 11, "Computer eng.");
    ustd1.WhoAreYou();
    UnivStudent ustd2("Youn", 21, "Electronic eng.");
    ustd2.WhoAreYou();
    return 0;
}