


#include <stdio.h>
int main() {    

    int a, b, sum;
    
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    sum = a + b;      
    
    printf("%d + %d = %d", a, b, sum);
    return 0;
}


#include <stdio.h>
int main() {    

    int a, b, sum,sub,mul;
    
    printf("Enter two numbers : ");
    scanf("%d %d %d", &a, &b,&c);

    sum = a + b; 
    sub=a-b;
    mul=a*b;
    
    printf("%d + %d = %d", a, b,sum,sub,mul);
    return 0;
}


find a factorial using n number
#include<stdio.h>

int main(){

    int x,fact=1,n;

    printf("Enter a number to find factorial ");

    scanf("%d",&n); 

    for(x=1;x<=n;x++)

        fact=fact*x; 

    printf("Factorial of %d is: %d",n,fact);

    return 0;

}

Wap c program to perform sum of n numbers

weather leap year or not

#include<stdio.h>

int main(){
    
    int a;
    
    printf("enter the value");
    scanf("%d",a);
    
    if(a%4==0){
        printf("leap year");
        
    }
    else
    {
        printf("Not a leap year");
    }
}

prime number or not 

#include <stdio.h>
int main() {
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);

  if (year % 4 == 0) {
      printf("leap year");
  }

  
  else {
      printf("Not leap year");
  }

  return 0;
}

Weather the number is positive or negative

#include<stdio.h>

int main(){
    
    int a;
    
    printf("Enter the number");
    scanf("%d",&a);
    
    if(a>=1){
         printf(" Number is positive");
        
    }
    
    else{
        
        printf("Negative ");
    }
    
}

Draw the pattern 

              *
              **
              ***
              ****
              *****
 
 
 #include<stdio.h>
 
 int main(){
     
     int n,i,j;
     printf(" enter the rows");
     scanf("%d",&n);
     
     for( i=1;i<=n;i++){
         for( j=1;j<=i;j++){
             printf("*");
         }
         
         printf("\n");
         
         
     }
     
     return 0;
     
     
 }

