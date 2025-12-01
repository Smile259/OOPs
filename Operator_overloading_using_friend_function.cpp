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

    // Friend function to overload +
    friend Complex operator + (Complex c1, Complex c2);
};

// Definition of friend function 
Complex operator + (Complex c1,Complex c2){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main(){

    Complex c1(3,4);
    Complex c2(5,4);
    Complex c3;

    c3 = c1 + c2;

    cout<<"Sum of Complex Numbers: "<<endl;
    cout<<"Real: "<<c3.real<<endl;
    cout<<"Imaginary: "<<c3.imag<<endl;

    return 0;
}

