#include <iostream>
#include <cstring>

using namespace std;

class Gun{
    private:
        int bullet;
    public:
        Gun(int bnum):bullet(bnum){

        }
        void Shot(){
            cout<<"BBANG!"<<endl;
            bullet--;
        }
};

class Police: public Gun{
    private:
        int handCuffs;
    public:
        Police(int bnum, int bcuff):Gun(bnum), handCuffs(bcuff){

        }
        void PutHandCuff(){
            cout<<"SNAP!"<<endl;
            handCuffs--;
        }

};

int main(){
    Police pman(5, 3);
    pman.Shot();
    pman.PutHandCuff();
    return 0;
}