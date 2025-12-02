#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"This is a base class"<<endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"This is a Derived class"<<endl;
    }
};

int main(){
    Dog d;
    d.eat();
    d.bark();

    return 0;
}