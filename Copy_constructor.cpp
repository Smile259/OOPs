#include<iostream>
using namespace std;

class Student{
    public:
    int age;
    string name;

    //Parameterized constructor
    Student (int a,string n){
        age = a;
        name = n;
    }

    //Copy Constructor

    Student(const Student &s){
        age = s.age;
        name = s.name;
    }
};

int main(){
    Student s1(30,"Ram");    //Parameterized constructor
    Student s2(s1);         // Copy constructor called

    cout<<"Original Object:"<<endl;
    cout<<"Name:"<<s1.name<<endl;
    cout<<"Age:"<<s1.age<<endl;

    cout<<"Copied Object:"<<endl;
    cout<<"Name:"<<s2.name<<endl;
    cout<<"Age:"<<s2.age<<endl;

    return 0;

}