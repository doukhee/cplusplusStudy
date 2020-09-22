#include <iostream>

using namespace std;

int main(){
    /** integer variable */
    int num = 12;
    /** pointer variable setting num reference */
    int *ptr = &num;
    /** double pointer variable setting pointer reference ptr variable */
    int **dptr = &ptr;
    /** ref is num reference variable setting */
    int &ref = num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;

    cout<<ref<<endl;
    cout<<*pref<<endl;
    cout<<**dpref<<endl;


    return 0;
}