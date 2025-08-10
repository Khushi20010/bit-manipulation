#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"before swap a :"<<a<<"and b is"<<b<<endl;
    a  =a+b;
    b=a-b;
    a  = a-b;
    cout<<"after swap a :"<<a<<"and b is"<<b<<endl;

}