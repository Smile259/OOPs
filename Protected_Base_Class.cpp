#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eating.."<<endl;
    }

    protected:
    void sleep(){
        cout<<"Sleeping.."<<endl;
    }
};

class Dog : protected Animal{
    public:
    void show(){
        eat();
        sleep();
    }
};

int main(){
    Dog d;

    d.show();
    return 0;
}