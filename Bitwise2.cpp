#include<iostream>
using namespace std;

//Using left shift Bitwise Operator printing values
//For Left shift formula used is (Y=x*2^i) 
//For Right shift formula used is (Y=x/2^i) 
int main(){

    int x=5,y,z;
    y=x<<1;
    z=x>>1;

    cout<<"The value is : "<<(int)y<<endl;
    cout<<"The value is : "<<(int)z<<endl;
    return 0;
}