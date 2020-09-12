#include <iostream>

using namespace std;

namespace BestComImpl{
    void SimpleFunc(void);
}

namespace BestComImpl{
    void PrettyFunc();
}

namespace ProgComImpl{
    void SimpleFunc(void);
}

int main(void){
    BestComImpl::SimpleFunc();
    return 0;
}

/** 같은 namespace 안에 있는 함수를 호출할 경우 그냥 쓰면 된다. */
void BestComImpl::SimpleFunc(){
    cout<<"BestCom define function"<<endl;
    PrettyFunc();
    ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc(){
    cout<<"So pretty!!"<<endl;
}

void ProgComImpl::SimpleFunc(){
    cout<<"ProgCom define function"<<endl;
}