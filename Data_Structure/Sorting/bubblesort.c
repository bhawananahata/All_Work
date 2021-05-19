#include <stdio.h>

int traversal(int *arr, int n)
{
    printf("Elements of this array are:\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
}
void bubbleSort(int *arr, int n)
{
    int r;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                r = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = r;
               
            }
           
        }
    }
}

int main()
{
    int i, n,arr[100];
    printf("Enter the size of array\n");
    scanf("%d",&n);

    printf("Now enter the elements\n");
    for(i= 0; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    traversal(arr, n);
    bubbleSort(arr, n);
    traversal(arr, n);
    return 0;
}