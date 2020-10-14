#include <iostream>

using namespace std;

class CountryArea{
    public:
        const static int RUSSIA = 1707540;
        const static int CANADA = 998467;
        const static int CHINA = 957290;
        const static int SOUTH_KOREA = 9922;
};

int main(){
    cout<<"Russia : "<<CountryArea::RUSSIA<<"km"<<endl;
    cout<<"Canada : "<<CountryArea::CANADA<<"km"<<endl;
    cout<<"China : "<<CountryArea::CHINA<<"km"<<endl;
    cout<<"South Korea : "<<CountryArea::SOUTH_KOREA<<"km"<<endl;
    return 0;
}