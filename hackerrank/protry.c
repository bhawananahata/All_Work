#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
     int n; 
    int sum = 0,value,num;
    int j = 1;
    int arr[n];
    scanf("%d", &n);
    // array 1 making
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            arr[j] = i;
            printf("%d ", arr[j]);
            j++ ;
        }
       
    }
   // printf("\n");
   // printf("j: %d\n",j);
    // array 2 making
   int max = 0;
    for (int i = 1; i <= j-1; i++)
    {   
        value = arr[i];
        while (value != 0)
        {
            sum = sum + value % 10 ;
            value = value / 10;
        }
        if (sum > max)
        {
            max = sum;
            num = arr[i];
            //printf("\n");
           // printf("i : %d",i);
           
        }

    }
    
    
    printf("\n");
   
     printf("%d", num);
    // printf("final : %d\n",final);
    //printf("%d",)
    return 0;
}
