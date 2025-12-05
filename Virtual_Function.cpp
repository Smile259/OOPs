#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show(){
        cout<<"Base Class Function."<<endl;
    }
};

class Derived: public Base{
    public:
    void show(){
        cout<<"Derived Class Function."<<endl;
    }
};

int main(){
    Base *ptr;
    Derived d;

    ptr = &d;
    ptr -> show();
    return 0;
}