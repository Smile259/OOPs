#include<iostream>
using namespace std;

class Grandfather{
    public:
    void house(){
        cout<<"I have a big house."<<endl;
    }
};

class Father : public Grandfather{
    public:
    void car(){
        cout<<"I have a car."<<endl;
    }
};

class Son : public Father{
    public:
    void bike(){
        cout<<"I have a bike."<<endl;
    }
};

int main(){
    Son s;
    s.house();
    s.car();
    s.bike();

    return 0;
}