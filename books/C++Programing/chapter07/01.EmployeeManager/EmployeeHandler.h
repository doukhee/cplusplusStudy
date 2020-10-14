#ifndef __EMPLOYEEWORKER_H__
#define __EMPLOYEEWORKER_H__

#include <iostream>
#include "PermanentWorker.h"

using namespace std;

class EmployeeHandler{
    private:
        PermanentWorker *empList[10];
        int empNum;
    public:
        EmployeeHandler():empNum(0){

        }
        void AddEmployee(PermanentWorker* emp){
            empList[empNum++] = emp;
        }
        void ShowAllSalaryInfo() const{
            for(int i = 0; i < empNum; i++){
                empList[i]->ShowSalaryInfo();
            }
        }
        void ShowTotalSalary() const{
            int sum = 0;
            for(int i = 0; i < empNum; i++){
                sum += empList[i]->GetPay();
            }
            cout<<"Salary Sum : "<<sum<<endl;
        }
        ~EmployeeHandler(){
            for(int i = 0; i < empNum; i++){
                delete empList[i];
            }
        }
};

#endif