#include<iostream>
using namespace std;
int main(){
    int n , i;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter a iht bit";
    cin>>i;
   int mask = 1<<(i-1) ;
   int result = n^mask;
   cout<<"number after toggling bit  "<<i<<"is"<<result<<endl;
   return 0;
}