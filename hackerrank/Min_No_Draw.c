#include<stdio.h>
#include<stdlib.h>



int main(){
int t,n,result;
scanf("%d",&t);
while(t>0){
    scanf("%d",&n);
    result = (n-1)*(n)/2 ;
    printf("%d\n",result);
    t--;
}

return 0;
}
