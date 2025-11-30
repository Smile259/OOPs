#include<iostream>
using namespace std;

inline int fun(int a,int b){
    return a+b;
}

int main(){
    int value = fun(34,73);
    cout<<"Value"<<value<<endl;

    return 0;
}