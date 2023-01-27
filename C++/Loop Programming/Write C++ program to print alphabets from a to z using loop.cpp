 //Write C++ program to print alphabets from a to z

// for loop

#include<iostream>
using namespace std;

int main(){
    char i;
    
    for(i='a';i<='z';i++)
    {
        cout<<i<<endl;
        
    }
   
    return 0;
    
}

//*************************************While loop**********************************************************

#include<iostream>
using namespace std;

int main(){
    
    char i='a';
    while(i<='z'){
        
        
        cout<<i++<<endl;
    }
    
        return 0;
}
