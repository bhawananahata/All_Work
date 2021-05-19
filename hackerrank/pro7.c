#include<stdio.h>
#include<stdlib.h>
int main(){
  long int n,m,result;
   scanf("%ld",&n);
   scanf("%ld",&m);
   result = (n-1)*m +(m-1);  
   printf("%ld",result);                            
    return 0; 
    }