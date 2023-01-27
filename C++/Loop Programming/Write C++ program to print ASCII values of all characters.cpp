 //Write C++ program to print ASCII values of all characters

#include<iostream>
using namespace std;

int main(){
    
    int i;
    
    
    for(i=0;i<=255;i++){
         
         
        cout<<"the ascii vale of "<<(char)i<<"="<<i<<endl;
        
        
    }
    return 0;
    
}

//************************************************************* While Loop**********************************************************************************


#include<iostream>
using namespace std;

int main(){
    
    int i=0;
    
    while(i<=255){
        
        i++;
        cout<<"The Ascii value of "<<(char)i<<" = "<<i<<endl;
    }
    return 0;
    
}

















