#include<iostream>
using namespace std;

class Display{
    public:
    void show(int a){
        cout<<"Showing integer:"<<a<<endl;
    }

    void show(double a){
        cout<<"Showing double:"<<a<<endl;
    }

    void show(string a){
        cout<<"Showing string:"<<a<<endl;
    }
};

int main(){
    Display d;
    d.show(10);
    d.show(3.14);
    d.show("Hello");

    return 0;
}