#include<iostream>
using namespace std;

class Display{
    public:
    int age;
    int roll_no;
    string name;
    string grade;
};

int main(){
    Display d;
    d.age = 32;
    d.roll_no = 24365;
    d.name = "Priya";
    d.grade = "A+";
    cout<<"Age:"<<d.age<<endl;
    cout<<"Roll no:"<<d.roll_no<<endl;
    cout<<"Name:"<<d.name<<endl;
    cout<<"Grade:"<<d.grade<<endl;

    return 0;
}