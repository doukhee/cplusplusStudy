#include <iostream>
#include <string.h>

using namespace std;


char *MakeStrAdr(int len){
    /** 메모리 할당 */
    char *str = new char[len];
    return str;
}

int main(){

    char *str = MakeStrAdr(20);
    strcpy(str, "I am so happy");
    cout<<str<<endl;
    /** 메모리 해제 */
    delete []str;
    return 0;
}