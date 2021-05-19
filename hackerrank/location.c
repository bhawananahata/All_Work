#include<stdio.h>
#include<stdlib.h>
int main()
{
 int* ptr,i;
 ptr = (int*)calloc(3,sizeof(int));
 for(i=0;i<3;i++){
     printf("write the %d no. element\n",i);
     scanf("%d",&ptr[i]);
 }

 for(i=0;i<3;i++){
     printf("element no %d is %d\n",i,ptr[i]);
 }
 ptr = (int*)realloc(ptr,5*sizeof(int));
 for(i=0;i<5;i++){
     printf("write the %d no. element\n",i);
     scanf("%d",&ptr[i]);
 }

 for(i=0;i<5;i++){
     printf("element no %d is %d\n",i,ptr[i]);
 }
 
return 0;
}
