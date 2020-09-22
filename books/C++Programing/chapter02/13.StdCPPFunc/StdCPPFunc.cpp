#include <cmath>
#include <cstdio>
#include <cstring>


int main(){
    char str1[] = "Result";
    char str2[30] = {"\0",};

    strcpy(str2, str1);

    printf("%s : %f \r\n", str1, sin(0.14));
    /** abs() 절대값을 구하는 함수 */
    printf("%s : %f \r\n", str2, abs(-1.25));
    return 0;
}