#include<iostream>
using namespace std;

//Sum of n terms of an AP is Sum=a+(n-1)*d
int main(){

    int a,n,sum,d;

    cout<<"Enter value of a is : ";
    cin>>a;

    cout<<"Enter value of n is : ";
    cin>>n;

    cout<<"Enter value of d is : ";
    cin>>d;

    sum=a+(n-1)*d;

    cout<<"Sum of n terms of AP is : "<<sum<<endl;
    return 0;



}