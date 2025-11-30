#include<iostream>
using namespace std;

int x = 100;

int main(){
    int x = 200;

    cout<<"Local Variable: "<<x<<endl;
    cout<<"Global Variable: "<<::x<<endl;

    return 0;
}