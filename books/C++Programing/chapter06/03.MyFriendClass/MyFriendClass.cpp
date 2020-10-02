#include <iostream>
#include <cstring>

using namespace std;

class Girl;
class Boy;
/**
 * friend 키워드는 사용되는 곳에서 정의하는 것이 아니라 사용 당할 곳에서 사용할 곳에 대해 정의하는 것
 */
class Boy{
    private:
        int height;
        friend class Girl;
    public:
        Boy(int len):height(len){}
        void ShowYourFriendInfo(Girl &frn);
};

class Girl{
    private:
        char phNum[20];
    public:
        Girl(char *name){
            strcpy(phNum, name);
        }
        void ShowYourFriendInfo(Boy &frn);
        /** Boy class에서 phNum에 접근하기 위해서 사용 */
        friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl &frn){
    cout<<"Her phone number : "<<frn.phNum<<endl;
}

void Girl::ShowYourFriendInfo(Boy &frn){
    cout<<"His height : "<<frn.height<<endl;
}

int main(){
    Boy boy(170);
    Girl girl("010-1234-5678");
    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendInfo(boy);

    return 0;
}