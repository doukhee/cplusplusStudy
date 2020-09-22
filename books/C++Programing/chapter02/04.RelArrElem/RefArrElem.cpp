#include <iostream>

using namespace std;


int main(){
    /** make array 3 value is [1, 3, 5] */
    int arr[3] = {1, 3, 5};

    /** reference value */
    int &ref1 = arr[0];
    int &ref2 = arr[1];
    int &ref3 = arr[2];

    cout<<ref1<<endl;
    cout<<ref2<<endl;
    cout<<ref3<<endl;

    return 0;
}