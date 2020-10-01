#include <iostream>
#include <cstring>

using namespace std;

class Person{
    private:
        char *name;
        int age;
    public:
        Person(char *myName, int myAge){
            int len = strlen(myName) + 1;
            name = new char[len];
            strcpy(name, myName);
            age = myAge;
        }
        Person(){
            name = NULL;
            age = 0;
            cout<<"Called Person()"<<endl;
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
    Person parr[3];
    char nameStr[100];
    char *strPtr;
    int age;
    int len;
    for(int i = 0; i < 3; i++){
        cout<<"name : ";
        cin>>nameStr;
        cout<<"age : ";
        cin>>age;
        len = strlen(nameStr)+1;
        strPtr = new char[len];
        strcpy(strPtr, nameStr);
        parr[i].SetPersonInfo(strPtr, age);
    }
    printf("\r\n\r\n");
    parr[0].ShowPersonInfo();
    parr[1].ShowPersonInfo();
    parr[2].ShowPersonInfo();
    return 0;
}