#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    long int n;
    int j = 1;
    int arr[n];
    
    scanf("%ld", &n);
    // array 1 making
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            arr[j] = i;
            printf("%ld ", arr[j]);
            j++;
        }
       
    }
     printf("\n");
    printf("j: %d\n",j);
    // array 2 making
    int sum = 0;
    int p[j-1];
    for (int i = 1; i <= j-1; i++)
    {

        while (arr[i] != 0)
        {

            sum = sum + arr[i] % 10;
            arr[i] = arr[i] / 10;
        }
        p[i] = sum;
         printf("%d ", p[i]);
         sum = 0;
        
    }
    // 3step:
    int max = 0;
    int num;
    
    for (int i = 1; i <= j-1 ; i++)
    {
       
        if (p[i] > max)
        {
            max = p[i];
            num = i;
           
        }

    }
    
    printf("\n");
    //printf("i : %d",i);
     printf("%d", max);
    // printf("final : %d\n",final);
    //printf("%d",)
    return 0;
}