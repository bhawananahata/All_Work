#include<stdio.h>
#include<stdlib.h>
int main()
{
char string[100000] ;
FILE *ptr = NULL;
 ptr = fopen("sk.txt","r");
 fscanf(ptr,"%s", string);
 printf("Content inside the txt file is: %s", string);
    return 0 ;}

