#include<iostream>
using namespace std;

class Student{
    public:

    //Constructor
    Student(){
        cout<<"Constructor called"<<endl;
    }
};

int main(){
    Student s;
    return 0;
}