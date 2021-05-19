#include <stdio.h>
#include <math.h>
int main()
{
    int i,n,p, power = 1;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("Enter the power\n");
    scanf("%d", &p);

    for (i = 0; i < p; i++)
    {
        power = n * power;
    }
   printf("Result is %d\n",power);
    return 0;
}