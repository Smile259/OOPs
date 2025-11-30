#include<iostream>
using namespace std;

class Number{
    public:
    int value;

    // Function that takes an object as argument
    void add(Number obj){
        cout<<"Sum ="<< value + obj.value <<endl;
    }
};

int main(){
    Number n1,n2;
    
    n1.value = 10;
    n2.value = 20;

    // passing object n2 to function of n1
    n1.add(n2);

    return 0;

}