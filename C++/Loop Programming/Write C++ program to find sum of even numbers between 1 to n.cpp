// Write C++ program to find sum of even numbers between 1 to n

#include<iostream>
using namespace std;

int main(){
    
    int n,i,sum=0;
    cout<<"Ente the Value ";
    cin>>n;
           for(i=1;i<=n;i++){
               if((i%2)==0){
                    sum =sum+i;
                  
            }
                 }
                   cout<<sum<<endl;
           return 0;
    }
