#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"The animal can eat."<<endl;
    }
};

class Dog{
    public:
    void bark(){
        cout<<"Dog can bark."<<endl;
    }
};

class Puppy : public Animal,public Dog{
    public:
    void show(){
        cout<<"Puppies are cute."<<endl;
    }
};

int main(){
    Puppy p;
    p.eat();
    p.bark();
    p.show();

    return 0;
}