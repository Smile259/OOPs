#include<iostream>
using namespace std;

class Base{
    public:

    Base(int x){
        cout<<"Base Constructor, value: "<<x<<endl;
    }
};

class Derived : public Base{
    public:
    Derived(int a,int b) : Base(a){
        cout<<"Derived Constructor, value: "<<b<<endl;
    }
};

int main(){
    Derived d(10,20);
    return 0;
}