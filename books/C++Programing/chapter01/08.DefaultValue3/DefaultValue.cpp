#include <iostream>

using namespace std;

/** Set Default Value */
int BoxVolumne(int length, int width=1, int height=1);

int main(void){
    cout<<"[3, 3, 3] : "<<BoxVolumne(3, 3, 3)<<endl;
    cout<<"[5, 5, D] : "<<BoxVolumne(5, 5)<<endl;
    cout<<"[7, D, D] : "<<BoxVolumne(7)<<endl;
    /** This is make Error length have not default Value */
    //cout<<"[D, D, D] : "<<BoxVolumne()<<endl;
    return 0;
}

/** Get Volumne */
int BoxVolumne(int length, int width, int height){
    return length*width*height;
}