#include<stdio.h>
#include<stdlib.h>
int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59};


    
    int factor(unsigned long long int n){
    unsigned long long int x =1;
    int  i=0 ;
    while( x <= n && i < 16){
        x = x*prime[i];
        i++;
    }
    return i-1;
}


int main(){
    int q,i;
    unsigned long long int n;
    scanf("%d",&q); 

    while(q>0){
        scanf("%lld",&n);
        printf("%d\n",factor(n));
        q--;
    }
  return 0;
}