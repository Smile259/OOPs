#include<iostream>
using namespace std;

class Student{
    public:

    int age;
    string name;
    //Default Constructor

    Student(){
        age = 18;
        name = "Unknown";
    }
};

int main(){
    Student s1;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    return 0;
}