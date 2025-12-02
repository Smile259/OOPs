#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"Base class A constructor."<<endl;
    }
};

class B : public A{
    public:
    B(){
        cout<<"Derived class B constructor."<<endl;
    }
};

int main(){
    B obj;

    return 0;
}