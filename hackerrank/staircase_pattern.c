#include <stdio.h>
int main()
{

    int i, j, n, k, m = 1;
    scanf("%d", &n);

    for (i = n; i > 0; i--)
    {
        for (j = 1; j <= i - 1; j++)
        {

            printf(" ");
        }
        for (k = 1; k <= m; k++)
        {
            printf("#");
        }
        printf("\n");
        m++;
    }

    return 0;
}