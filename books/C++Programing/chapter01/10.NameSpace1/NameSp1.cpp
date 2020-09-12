#include <iostream>

using namespace std;

/** make namespace BestComImpl */
namespace BestComImpl{
    void SimpleFunc(void){
        cout<<"BestCom define function"<<endl;
    }
}

/** make namespace ProgComImpl */
namespace ProgComImpl{
    void SimpleFunc(void){
        cout<<"ProgCom define function"<<endl;
    }
}

int main(void){
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}