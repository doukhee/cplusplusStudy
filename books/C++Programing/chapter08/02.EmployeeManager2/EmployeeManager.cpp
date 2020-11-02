#include <iostream>
#include <cstring>

using namespace std;

class employee{
    private:
        char name[50];
    public:
        employee(char *name){
            strcpy(this->name, name);
        }
        void ShowYourName() const{
            cout<<"name : "<<name<<endl;
        }
};

class PermanentWorker: public employee{
    private:
        int salary;
    public:
        PermanentWorker(char *name, int money):employee(name), salary(money){

        }
        int GetPay() const{
            return salary;
        }
        void ShowSalaryInfo() const{
            ShowYourName();
            cout<<"Salary : "<<salary<<endl;
        }

};

class EmployeeHandler{
    private:
        employee *empList[50];
        int empNum;
    public:
        EmployeeHandler():empNum(0){

        }
        void AddEmployee(employee *emp){
            empList[empNum++] = emp;
        }
        void ShowAllSalaryInfo() const{
            /*
            for(int i = 0; i < empNum; i++){
                empList[i]->ShowSalaryInfo();
            }
            */
        }
        void ShowTotalSalary() const{
            int sum = 0;
            /*
            for(int i = 0; i < empNum; i++){
                sum += empList[i]->GetPay();
            }
            */
           cout<<"Salary sum : "<<sum<<endl;
        }
        ~EmployeeHandler(){
            for(int i = 0; i < empNum; i++){
                delete empList[i];
            }
        }
};

int main(){
    /** 직원 관리를 목적으로 설계된 컨틀롤 클래스의 객체 생성 */
    EmployeeHandler handler;
    /** Controller class add */
    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));
    handler.AddEmployee(new PermanentWorker("JUN", 2000));

    handler.ShowAllSalaryInfo();

    handler.ShowTotalSalary();
    
    return 0;
}