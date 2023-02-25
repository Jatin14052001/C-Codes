#include<iostream>
using namespace std;

//Printing the area of a triangle Area=(Base*Height)/2 
int main(){

    int b,h;
    int Area;

    cout<<"The value of b is : ";
    cin>>b;

    cout<<"The value of h is : ";
    cin>>h;

    Area=(b*h)/2;

    cout<<"Area of a triangle is : "<<Area<<endl;
    return 0;
}