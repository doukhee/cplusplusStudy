#include <iostream>
#include <cstring>

using namespace std;

class Person{
    private:
        char *name;
        int age;
    public:
        Person(char *myName, int myMage){
            int len = strlen(myName) + 1;
            name = new char[len];
            strcpy(name, myName);
            age = myMage;
        }
        Person(){
            name = NULL;
            age = 0;
        }
        void SetPersonInfo(char *myName, int myAge){
            name = myName;
            age = myAge;
        }
        void ShowPersonInfo() const {
            cout<<"name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
        }
        ~Person(){
            delete []name;
            cout<<"called destructor"<<endl;
        }
};

int main(){
    Person *parr[3];
    char nameStr[100];
    int age;

    for(int i = 0; i < 3; i++){
        cout<<"name : ";
        cin>>nameStr;
        cout<<"age : ";
        cin>>age;
        parr[i] = new Person(nameStr, age);
    }

    printf("\r\n\r\n");
    parr[0]->ShowPersonInfo();
    parr[1]->ShowPersonInfo();
    parr[2]->ShowPersonInfo();
    delete parr[0];
    delete parr[1];
    delete parr[2];
    
    return 0;
}