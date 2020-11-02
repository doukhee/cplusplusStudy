/**
 * 상속 보단 더 자세히 여러가지 가능성을 열어둘 수 있다.
 * 예를 들면, 총을 가지고 있지 않는 경찰도 표현 가능, 총을 가지고 있는 사람만 표현이 가능하던 
 * 상속의 문제를 해결 가능하다.
 */
#include <iostream>
#include <cstring>

using namespace std;

class Gun{
    private:
        int bullet;
    public:
        Gun(int bNum):bullet(bNum){

        }
        void Shot(){
            cout<<"BBANG!"<<endl;
            bullet--;
        }
};

class Police{
    private:
        int handCuffs;
        Gun *pistol;
    public:
        Police(int bNum, int bCuffs):handCuffs(bCuffs){
            if(bNum > 0){
                pistol = new Gun(bNum);
            }else{
                pistol = NULL;
            }
        }
        void PutHandcuff(){
            cout<<"SMAP!"<<endl;
            handCuffs--;
        }
        void Shot(){
            if(pistol == NULL){
                cout<<"Hut BBANG!"<<endl;
            }else{
                pistol->Shot();
            }
        }
        ~Police(){
            if(pistol != NULL){
                delete pistol;
            }
        }
};

int main(){
    Police pman1(5, 3);
    pman1.Shot();
    pman1.PutHandcuff();

    Police pman2(0, 3);
    pman2.Shot();
    pman2.PutHandcuff();
    return 0;
}