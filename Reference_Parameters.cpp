#include<iostream>
using namespace std;

class Number{
    public:
    
    void change(int &a){
        a = a + 5;
    }
};

int main(){
    int a = 10;

    Number obj;
    obj.change(a);

    cout<<"The value of a: "<<a<<endl;
}