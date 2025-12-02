#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Animals can eat."<<endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"Dog can bark."<<endl;
    }
};

class Cat : public Animal{
    public:
    void meow(){
        cout<<"Cat can meow."<<endl;
    }
};

class Puppy : public Dog,public Cat{
    public:
    void play(){
        cout<<"Puppy can paly."<<endl;
    }
};

int main(){
    Puppy p;
    
    p.Dog::eat();
    p.bark();      
    p.meow();
    p.play();

    return 0;
}