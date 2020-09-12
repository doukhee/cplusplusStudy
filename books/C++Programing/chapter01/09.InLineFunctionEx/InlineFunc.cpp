#include <iostream>

using namespace std;

/** make all type */
template <typename T>

/** make inline function */
inline T SQUARE(T x)
{
    return x*x;
}

int main(void){
    cout<<SQUARE(5.5)<<endl;
    cout<<SQUARE(12)<<endl;
    return 0;
}