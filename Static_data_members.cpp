#include<iostream>
using namespace std;

class Student{
    public:
    int roll;
    static int count; // declaration of static member

    Student(){
        count++;
    }
};

// definition outside the class
int Student::count = 0;

int main(){
    Student s1,s2,s3;

    cout<<"Toatal Students: "<<Student::count<<endl;

    return 0;
}