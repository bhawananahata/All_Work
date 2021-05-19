#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main()
{
int n,digit=0;
printf("Enter the integer number\n");
scanf("%d",&n);
while(n!=0){
  n = n/10;
  digit++ ;
}

printf("total digits in number is %d\n",digit);
return 0;
}