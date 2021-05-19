#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    
int n,m,max;
scanf("%d",&n);
scanf("%d",&m);
if(n==1 && m ==1){
    max = (n)*(m);
}
else if(n==1 && m != 1){
    max = (n)*(m-1);
}
else if(n != 1 && m==1){
    max = (n-1)*(m);
}

else{max = (n-1)*(m-1);}
printf("%d",max);

return 0;
}
