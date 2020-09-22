#include <iostream>

using namespace std;

/** Swap Value using call-by-reference */
void SwapByRef(int &ref1, int &ref2){
    /** make reference? */
    /** pointer using -> access */
    /** reference using . access */
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main(void){

    int val1 = 10;
    int val2 = 20;
    /** input reference variable val1, val2 */
    SwapByRef(val1, val2);
    cout<<"val1 : "<<val1<<endl;
    cout<<"val2 : "<<val2<<endl;
    return 0;
}