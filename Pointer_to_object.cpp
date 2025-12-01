#include<iostream>
using namespace std;

class A{
    public:
    int x;
};

int main(){
    A obj;
    A *p = &obj;    // pointer to object

    p->x = 10;     //  access using pointer

    cout<<p->x;   
}