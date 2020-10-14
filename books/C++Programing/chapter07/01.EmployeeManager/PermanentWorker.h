#ifndef __PERMANENTWORKER_H__
#define __PERMANENTWORKER_H__


#include <iostream>

using namespace std;

class PermanentWorker{
    private:
        char name[100];
        int salary;
    public:
        PermanentWorker(char *name, int money):salary(money){
            strcpy(this->name, name);
        }
        int GetPay() const{
            return salary;
        }
        void ShowSalaryInfo() const{
            cout<<"name : "<<name<<endl;
            cout<<"salary : "<<salary<<endl;
        }
};

#endif