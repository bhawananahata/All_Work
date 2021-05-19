#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int n, i, j, arr[10][10], sum1 = 0, sum2 = 0, res;
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      scanf("%d", &arr[i][j]);
     // printf("%d\n", arr[i][j]);
    }
  }

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      if (i = j)
      {
        sum1 = sum1 + arr[i][j];
      }
    }
  }

  for (i = 1, j = n; i <= n && j > 0; i++ && j--)
  {
    sum2 = sum2 + arr[i][j];
  }

 // printf("sum1 : %d\n", sum1);
 // printf("sum2 : %d\n", sum2);
  if (sum2 > sum1)
  {
    res = sum2 - sum1;
  }
  else
  {
    res = sum1 - sum2;
  }
  printf("%d\n", res);
  return 0;
}