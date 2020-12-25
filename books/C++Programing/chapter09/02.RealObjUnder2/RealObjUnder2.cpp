#include <iostream>

using namespace std;

typedef struct _Data{
    int data;
    void (*showData)(_Data* );
    void (*Add)(_Data *, int);
} Data;

void ShowData(Data *This){
    cout<<"Data : "<<This->data<<endl;
}

void Add(Data *This, int num){
    This->data += num;
}

int main(){
    Data obj1 = {15, ShowData, Add};
    Data obj2 = {7, ShowData, Add};

    obj1.Add(&obj1, 17);
    obj2.Add(&obj2, 9);
    obj1.showData(&obj1);
    obj2.showData(&obj2);
    return 0;
}