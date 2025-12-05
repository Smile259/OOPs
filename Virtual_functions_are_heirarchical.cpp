#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void eat(){
        cout<<"Animals can eat"<<endl;
    }
};

class Dog : public Animal{
    public:
    void eat(){
        cout<<"Dog can eat"<<endl;
    }
};

class Puppy : public Animal{
    public:
    void eat(){
    cout<<"Puppy can eat"<<endl;
    }
};

int main(){
    Animal *ptr;
    Dog d;
    Puppy p;

    ptr = &d;
    ptr -> eat();

    ptr = &p;
    ptr -> eat();

    return 0;
}
