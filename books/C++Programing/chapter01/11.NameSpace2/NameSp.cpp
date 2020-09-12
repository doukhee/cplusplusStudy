#include <iostream>

using namespace std;

/** make namespace */
namespace BestComImpl{
    void SimpleFunc(void);
}

/** make namespace */
namespace ProgComImpl{
    void SimpleFunc(void);
}

int main(void){
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}

/** another way define namespace function */
void BestComImpl::SimpleFunc(void){
    cout<<"BestCom Define function"<<endl;
}

/** another way define namespace function */
void ProgComImpl::SimpleFunc(void){
    cout<<"ProgCom Define function"<<endl;
}