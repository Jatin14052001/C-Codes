#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    int prod=1;

    cout<<"The value of a is : ";
    cin>>a;

    cout<<"The value of b is : ";
    cin>>b;

    cout<<"The value of c is : ";
    cin>>c;

    prod*=prod*a*b*c;

    cout<<"The final value is : "<<prod<<endl;
    return 0;
}