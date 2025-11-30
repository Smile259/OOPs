#include<iostream>
using namespace std;

class Student{
    private:
    int roll;
    float marks;

    public:
    Student(int r,float m){
        roll = r;
        marks = m;
    }
    //Friend Function Declaration

    friend void display(Student s);
};

//Friend Function definition 

void display(Student s){
    cout<<"Roll Number:"<<s.roll<<endl;
    cout<<"Marks:"<<s.marks<<endl;

}

int main(){
    Student s1(101,89.6);

    display(s1);     // calling friend function 
    
    return 0;
}