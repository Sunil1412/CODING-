//Write C++ program to print sum of digits enter by user.

#include<iostream>
using namespace std;

int main(){
    
    int i,n;
cout<<"Enter The the Digits";
cin>>n;



for(i=0 ; n>0; n=n/10) 
   i=i+(n%10);
    cout<<i;

return 0;
    
}
