#include<iostream>
using namespace std;

int main(){

    int a,b,c,d;

    cout<<"Enter value of a is :  ";
    cin>>a;

    cout<<"Enter value of b is : ";
    cin>>b;

    c=--a*b;
    d=a--*b;

    cout<<"The pre-decrement value is : "<<c<<endl;
    cout<<"The post-decrement value is : "<<d<<endl;

    return 0;

}