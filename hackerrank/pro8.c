#include<stdio.h>
int main(){
    
    unsigned long long int n,t,result;
    scanf("%lld",&t);
   
    while(t>0){
    scanf("%lld",&n);
     result = (n*n)%((10^9)+7);
    printf("%lld\n",result);
    t--;  
    }
    return 0;
}