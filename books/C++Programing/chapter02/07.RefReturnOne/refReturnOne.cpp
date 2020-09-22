#include <iostream>

using namespace std;

int &RefRetFuncOne(int &ref){
    /** reference value step up */
    ref++;
    return ref;
}

int main(){
    int num1 = 1;
    /** num2 is reference num1 */
    int &num2 = RefRetFuncOne(num1);
    /** num1 is 2 */
    /** num1 value step up*/
    /** num1 is 3 */
    num1++;
    /** num1 is 4 */
    num2++;
    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;
    return 0;
}