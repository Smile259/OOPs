#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;

    void Data(int a,string n){
        age = a;
        name = n;
    }

    void Display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    // Dynamically creating an object
    Student *s = new Student;

    // Setting values
    s -> Data(67,"Ram");

    // Displaying values
    s -> Display();

    // Free memory
    delete s;

    return 0;
}