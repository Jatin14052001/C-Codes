#include<iostream>
using namespace std;

//Using If-Else statement printing grades
int main(){

    int m;

    cout<<"The value of marks is : ";
    cin>>m;

    if(m>90&&m<100){
        cout<<"The grade is A ";
    }
    else if (m<90&&m>75){
        cout<<"The grade is B ";
    }
    else if (m<75&&m>50){
        cout<<"The grade is C ";
    }
    else if (m<50&&m>35){
        cout<<"The grade is D ";
    }
    else
        cout<<"Not Pass"<<endl;
    
    return 0;
}