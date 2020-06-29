#include <iostream>

using namespace std;

int main(void){
    
    int value = 0;

    cout<<"Input number : ";
    cin>>value;

    for(int i = 1; i <= 9; i++){
        cout<<value*i<<endl;
    }
    
    return 0;
}