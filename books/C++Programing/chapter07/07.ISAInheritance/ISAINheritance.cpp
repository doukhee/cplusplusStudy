#include <iostream>
#include <cstdarg>

using namespace std;

class Computer
{
    private:
        char Owner[50];
    public:
        Computer(char *name){
            strcpy(Owner, name);
        }
        void Calculate(){
            cout<<"요청 내용을 계산합니다."<<endl;
        }
};

class NotebookCmp : public Computer{
    private:
        int Battery;
    public:
        NotebookCmp(char *name, int initChag):Computer(name), Battery(initChag){
        }
        void Charging(){
            Battery += 5;
        }
        void UseBattery(){
            Battery -= 1;
        }
        void MovingCal(){
            if(GetBatteryInfo() < 1){
                cout<<"충전이 필요합니다."<<endl;
                return ;
            }
            cout<<"이동 하면서 ";
            Calculate();
            UseBattery();
        }
        int GetBatteryInfo() const{
            return Battery;
        }
};

class TableNotebook: public NotebookCmp{
    private:
        char regstPenModel[50];
    public:
        TableNotebook(char *name, int initChag, char *pen):NotebookCmp(name, initChag){
            strcpy(regstPenModel, pen);
        }
        void Write(char *penInfo){
            if(GetBatteryInfo() < 1){
                cout<<"충전이 필요합니다."<<endl;
                return;
            }
            if(strcmp(regstPenModel, penInfo) != 0){
                cout<<"등록된 펜이 아닙니다.";
                return;
            }
            cout<<"필기 내용을 처리합니다."<<endl;
            UseBattery();
        }
};

int main(){
    NotebookCmp nc("이수종", 5);
    TableNotebook tc("정수형", 5, "ISE-241-242");
    nc.MovingCal();
    tc.Write("ISE-241-242");
    return 0;
}