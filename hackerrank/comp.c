#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
 float L,A,Fcc,E ,Y,Fy ,Q,Wd;
 float K,Rmin,al,X,Fcd,Pd;
 printf("Enter the Length of coloumn \n");
 scanf("%f",&L);
 printf("Length of coloumn is:%f \n",L);

printf("Enter the value of Rmin \n");
 scanf("%f",&Rmin);
 printf("Value of Rmin is:%f \n",Rmin);

 printf("Enter the value of A \n");
 scanf("%f",&A);
 printf("Value of A is:%f \n",A);

 printf("Enter the value of K \n");
 scanf("%f",&K);
 printf("Value of K is:%f \n",K);

 printf("Enter the Value of E\n");
 scanf("%f",&E);

 Fcc = (3.14)*(3.14)*E/((K*L/Rmin)*(K*L/Rmin)) ;
 
printf("Value of Fcc is : %f \n",Fcc);

printf("Enter the value of Fy \n");
 scanf("%f",&Fy);

Y = sqrt(Fy/Fcc) ;
printf("Value of Y is : %f \n",Y);

printf("Enter the value of al \n");
 scanf("%f",&al);

Q = 0.5*(1.0 + (al)*(Y-0.2) + Y*Y) ;
printf("Value of Q is : %f \n",Q);

X = 1/(Q + sqrt(Q*Q - Y*Y)) ;  
printf("Value of X is : %f \n",X);

Fcd = X * Fy / (1.10) ;
printf("Value of Fcd is : %f \n",Fcd);

Pd = A * Fcd ;
printf("Value of Pd is : %f \n",Pd);

Wd = Pd/1.5 ; 
printf("Value of Wd_Working_Load is : %f \n",Wd);
    return 0;
}