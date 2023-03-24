#include<iostream>
using namespace std;

//Printing Distance =((final velocity)^2-(initial velocity)^2)/(2*accleration)

int main(){

    int u,v,a;
    float speed;

    cout<<"Enter value of distane is : ";
    cin>>a;

    cout<<"Enter value of initial velocity is : ";
    cin>>u;

    cout<<"Enter value of final velocity is : ";
    cin>>v;

    distance=(v*v-u*u)/(2*a);

    cout<<"Speed is : "<<speed<<endl;
    return 0;


}
