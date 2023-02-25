#include<iostream>
using namespace std;

//Using Pre-increment and Post-increament 
int main(){

    int x,y,w,z;

    cout<<"The value of x is : ";
    cin>>x;

    cout<<"The value of y is : ";
    cin>>y;

    z=x++*y;
    w=++x*y;

    cout<<"The final value is : "<<z<<endl;
    cout<<"The final value is : "<<w<<endl;
    return 0;

}