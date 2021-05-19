#include <stdio.h>
#include <stdlib.h>
int Isprime(int n)
{
    if (n == 2 || n == 3 || n == 5 || n == 7)
    {
        // printf("Prime No : %d",n);
        return 1;
    }
    else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 && n != 2 && n != 3 && n != 5 && n != 7 && n != 0 && n != 1)
    {
        //printf("Given No %d is Not a Prime No.\n",n);
        return 0;
    }
    else if (n == 1)
    {
        // printf("%d is Not a prime No.\n",n);
        return 0;
    }
    else
    {
        // printf("%d is a prime No.\n",n);
        return 1;
    }
}

int check(int *arr,long int value,long int count)
{
    int mark = 1;
    int i;
    for (i = 1; i < count; i++)
    {
        arr[i + 1] = arr[i] * arr[i + 1];
    }
    for (i = 1; i <= count; i++)
    {
         printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 1; i <= count; i++)
    {
        if (arr[i] > value)
        {
            return i-1 ;
        }
    }
}

int main()
{

    long int n;
   int  i, j = 1, q, count = 0;
  int arr[100];
    //scanf("%d", &q);

        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            if (Isprime(i))
            {
                // printf("%d ", i);
                count++;
                arr[j] = i;
                j++;
            }
        }
        // printf("\n");
        for (i = 1; i <= count; i++)
        {
             printf("%d ", arr[i]);
        } 
         printf("\n");
         printf("%d\n", count);

        printf("%d\n", check(arr,1000000000,count));
     
    return 0;
}