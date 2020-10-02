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
        void ShowPersonInfo(){
            cout<<"name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
        }
        ~Person(){
            delete []name;
            cout<<"Called destructor"<<endl;
        }
};

int main(){
    Person man1("Lee Dong woo", 19);
    /** 단순히 참조만 하는 것 */
    /** 책에서처럼 하면, ~Person()에서 메모리 해제에서 두번 발생하여 에러 방생 */
    Person &man2 = man1;
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}