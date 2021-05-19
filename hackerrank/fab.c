#include<stdio.h>
int main()
{
    int j=0,num,fab=1,i;
    printf("Enter the number\n");
    scanf("%d",&num);
    for (i=0 ;i<num-1;i++){
        printf("%d\n",fab);
     fab = fab + j;
     j = fab - j;

    } 
    printf("you fab number is %d",j);
    return 0;
}