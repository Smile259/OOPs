#include<iostream>
using namespace std;

class A{
    public:

    A(){
        cout<<"Base class constructor called."<<endl;
    }
    ~A(){
        cout<<"Base class destructor called."<<endl;
    }
};

class B : public A{
    public:

    B(){
        cout<<"Derived class constructor called."<<endl;
    }
    ~B(){
        cout<<"Derived class destructor called."<<endl;
    }
};

int main(){
    B b;
    return 0;
}