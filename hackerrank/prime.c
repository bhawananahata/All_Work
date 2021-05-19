#include<stdio.h>
#include<math.h>
int main()
{ 
    int n,i,j;
    printf("Enter the number\n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
    if(i%j==0 && i!=j){
        printf("%d  is Not a prime no.\n",i);
    }
    else{
        printf("%d  is a prime no.\n",i);
    }
    }
    }
    return 0;
}