#include<iostream>
using namespace std;

class Student{
    public:

    int age;
    string name;
    // Parameterized constructor

    Student(int a,string n){
        age = a;
        name = n;

    }
};

int main(){
    Student s1(30,"Ram");
    cout<<"Age: "<<s1.age<<endl;
    cout<<"Name: "<<s1.name<<endl;

    return 0;
}



