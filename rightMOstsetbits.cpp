#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
cin>>n;
if(n == 0){
    cout<<"no set bits possible";
}
int rightmost = n&(-n);
int position   =1;
while(rightmost>1){
    rightmost>>=1;
    position++;
}
cout<<"rightmost set bits are :"<<position<<endl;


}