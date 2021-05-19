#include <stdio.h>
int main()
{
    unsigned long long int arr[101], max = 0, min = 100000,sum = 0,maxmax,minmin;

    for (int i = 1; i <= 5; i++)
    {
        scanf("%lld", &arr[i]);
       // printf("%lld\n", arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        sum = sum + arr[i];
    }
    maxmax = sum - max;
    minmin = sum - min;
   //  printf("sum:%lld\n", sum);
    // printf("min :%lld\n",min);
   // printf("max :%lld\n",max);
    printf("%lld ",maxmax);
    printf("%lld",minmin);
    return 0;
}