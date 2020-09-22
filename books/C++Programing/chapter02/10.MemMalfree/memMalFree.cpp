#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char *MakeStrAdr(int len){
    /** 동적으로 메모리 할당 */
    char *str = (char *)malloc(sizeof(char)*len);
    /** 할당된 메모리 reference 반환 */
    return str;
}

int main(){
    char *str = MakeStrAdr(20);
    /** 문자열 복사 */
    strcpy(str, "I am to happy");
    cout<<str<<endl;
    free(str);
    return 0;
}