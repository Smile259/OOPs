#include<iostream>
using namespace std;

class A{
    public:
    int x;

    void Display(int x){
        this->x = x;   // still works
    }

    void show(){
        cout<<x;
    }
};

int main(){
    A obj;
    obj.Display(10);
    obj.show();
}