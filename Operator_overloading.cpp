#include<iostream>
using namespace std;

class Complex{
    public:

    int real;
    int imag;

    Complex(int r=0,int i=0){
        real = r;
        imag = i;
    }

// Overloading + Operator
Complex operator + (Complex c){
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
   }
};

int main(){

    Complex c1(3,4);  // Real
    Complex c2(5,6);  // Imaginary
    Complex c3;

    c3 = c1 + c2;   // Calls Operators

    cout<<"After Adding Complex Numbers: "<<endl;
    cout<<"Real = "<<c3.real<<endl;
    cout<<"Imaginary = "<<c3.imag<<endl;

    return 0;
}