#include <stdio.h>
int main()
{
    int i, n,j;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2*n; j++)
        {
            if (j>=(n -1- i)  && j <= (n -1 + i)) 
            {
                printf("*");
                
            }
            else
                {
                    printf(" ");
                }
        }
        printf("\n");
    }
    return 0;
}