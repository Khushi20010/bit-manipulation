#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enetr a  number: "<<endl;
    cin>>n;
   if(n>0 && (n&(n-1)) == 0){
    cout<<"it si power of 2  "<<endl;
   }
   else{
    cout<<"no it is not power of 2 "<<endl;
   }
}