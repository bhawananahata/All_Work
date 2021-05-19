#include <stdio.h>
int main()
{
    int k, r, c, i, j, p, q, n, mat1[10][10], mat2[10][10], mult[10][10], sum;
    printf("Enter the No. of rows in the matrix one\n");
    scanf("%d", &r);
    printf("Enter the No. of columns in the matrix one\n");
    scanf("%d", &c);
    printf("enter the members of matrix 1\n");
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            printf("enter the %d %d th element\n", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the No. of rows in the matrix second\n");
    scanf("%d", &p);
    printf("Enter the No. of columns in the matrix second\n");
    scanf("%d", &q);
    printf("enter the members of matrix 2\n");
    for (i = 1; i <= p; i++)
    {
        for (j = 1; j <= q; j++)
        {
            printf("enter the %d %d th element\n", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 1; i <= p; i++)
    {
        for (j = 1; j <= q; j++)
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    for (i = 1; i <= c; i++)
    {
        for (j = 1; j <= p; j++)
        {

            for (k = 1; k <= c; k++)
            {
                sum += mat1[i][k] * mat2[k][j];
            }
            mult[i][j] = sum;
            sum = 0;
        }
    }
    for (i = 1; i <= c; i++)
    {
        for (j = 1; j <= p; j++)
        {
            printf("%d\t", mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}