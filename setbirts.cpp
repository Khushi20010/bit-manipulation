#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ener a number:"<<endl;
    cin>>n;
    int count = 0;
    while(n>0){
        n = n&(n-1);
        count++ ;
    }
    cout<<"Number of set bits are:  "<<count<<endl;
}