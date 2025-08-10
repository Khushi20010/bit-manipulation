#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number 1:";
    cin>>a;
     int b;
    cout<<"Enter a number 2:";
    cin>>b;
    if((a^b)<0)
    cout<<"yes they ahve opp sign";
    else{
        cout<<"no they have  same sign";
    }

}