#include<stdio.h>

void changevalue(int* x , int* y){
    int temp;
    temp = *x+*y;
    *x = temp;
    temp = *x-*y-*y;
    *y = temp;
}
int main()
{
    int a = 9, b = 5;
    printf("the vale of a and b is %d ,%d respectively\n",a,b);
    changevalue(&a,&b) ;
    printf("the vale of a and b is %d ,%d respectively",a,b);
    return 0;
}