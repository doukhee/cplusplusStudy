#include <iostream>
#include <cstring>

using namespace std;

class Person{
    private:
        char *name;
        int age;
    public:
        Person(char *myName, int myAge){
            int len = strlen(myName);
            name = new char[len];
            strcpy(name, myName);
            age = myAge;
        }
        void ShowPersonInfo() const{
            cout<<"name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
        }
        ~Person(){
            delete []name;
            cout<<"called destructor!"<<endl;
        }
};

int main(){
    Person man1("Lee dong woo", 29);
    Person man2("Jang dong gun", 41);
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}