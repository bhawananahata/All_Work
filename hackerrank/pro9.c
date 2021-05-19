#include<stdio.h>
#include<math.h>
int main(){
    int l,s1,s2,q,r;
    double T;
    scanf("%d%d%d",&l,&s1,&s2);
    scanf("%d",&q);
    
    while(q>0){  
     scanf("%d",&r);  
     T = (sqrt(2)*(l-sqrt(r)))/(s2-s1) ;
     printf("%lf\n",T); 
         q--;
        
    }
    
    return 0;
}