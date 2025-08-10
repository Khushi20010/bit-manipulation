#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter a number: ";
    cin>>n;
    if((n&1) == 0){
        cout<<n<<"yes it is multiple of 2";
    }
    else 
       cout<<n<<"no it is  not a  multiple of 2";
}