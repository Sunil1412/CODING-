//Write C++ program to print multiplication table of a given number

//******************************for loop*******************

#include<iostream>
using namespace std;

int main(){
    
    int a,i;
    cout <<" Enter the multiplication ";
    cin>>a;
    
    for(i=1;i<=10;i++){
        
        cout<<a<<"x"<<i<<"= "<<a*i<<endl;
    }
    return 0;
    
}

//**************************While loop*************************

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Multiplication of first 10 numbers ";
    cin>>a;
    int i=0;
    while(i<10){
        i++;
        cout<<a<<"x"<<i<<"= "<<a*i<<endl;
    }
    return 0;
    
}
