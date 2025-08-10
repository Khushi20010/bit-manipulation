#include<iostream>
using namespace std;
int main(){
    int n ,i;
    cout<<"Enter a number";
cin>>n;
cout<<"Enter the ith bit";
cin>>i;
int mask =  1<<(i-1);
if(n&mask){
    cout<<"The"<<i<<"th bit is set";
}
else{
    cout<<"The"<<i<<"th bit is not set";
}


}