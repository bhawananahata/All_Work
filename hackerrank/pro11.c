#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n, i, arr[101];
    double neg = 0, pos = 0, zero = 0;
    double poso, nega, zro;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        // printf("%d\n", arr[i][j]);
    }
    for (i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] > 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    poso = pos/n;
    nega = neg/n;
    zro = zero/n;
    printf("%lf\n", poso);
    printf("%lf\n", nega);
    printf("%lf\n", zro);

    return 0;
}
