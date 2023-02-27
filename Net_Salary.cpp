#include<iostream>
using namespace std;

int main(){

    float basic;
    float percentallowance;
    float percentdeduction;
    float Netsalary;

    cout<<"Enter basic salary is : ";
    cin>>basic;

    cout<<"Enter Percentage allowance is : ";
    cin>>percentallowance;

    cout<<"Enter Deduction allowance is : ";
    cin>>percentdeduction;

    Netsalary=basic+basic*percentallowance/100-basic*percentdeduction/100;

    cout<<"The Net salary is : "<<Netsalary<<endl;
    return 0;

}