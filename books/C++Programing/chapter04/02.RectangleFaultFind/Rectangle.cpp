#include <iostream>
#include "Rectangle.h"

using namespace std;

bool Rectangle::InitMembers(const Point &ul, const Point &lr){
    if(ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()){
        cout<<"wrong position send"<<endl;
        return false;
    }
    upLeft = ul;
    lowRight = lr;

    return true;
}

void Rectangle::ShowRecInfo() const{
    cout<<"left up : "<<'['<<upLeft.GetX()<<", "<<upLeft.GetY()<<']'<<endl;
    cout<<"right bottom : "<<'['<<lowRight.GetX()<<", "<<lowRight.GetY()<<']'<<endl;
}