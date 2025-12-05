#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show() = 0;  //Pure Virtual Function 
};

class Derived1 : public Base{
    public:
    void show(){
        cout<<"Derived1 class function."<<endl;
    }
};

class Derived2 : public Base{
    public:
    void show(){
        cout<<"Derived2 class function."<<endl;
    }
};

int main(){
    Base *ptr;
    Derived1 d1;
    Derived2 d2;

    ptr = & d1;
    ptr -> show();

    ptr = & d2;
    ptr -> show();

    return 0;
    
}

