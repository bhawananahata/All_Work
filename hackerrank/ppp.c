#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i, A[3],B[3],alice=0,bob=0;
    scanf("%d",&n);
    for(i = 0; i < n ;i++){
        scanf("%d",&A[i]);
    }
    for(i = 0; i < n ;i++){
        scanf("%d",&B[i]);
    }
    for(i = 0; i < n ;i++){
       // printf("%d %d\n",A[i],B[i]);
    }
   
    for(i = 0; i < n ;i++){
     if(A[i]>B[i]){
         alice ++;
     }  
     else if(A[i] < B[i]) {
        bob ++; 
     }
     else if(A[i] == B[i]){
         alice = alice;
         bob = bob;
    
    } }
   printf("%d %d",alice,bob);
    return 0;
}
