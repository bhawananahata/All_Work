#include <stdio.h>

int traversal(int *arr, int n)
{
    printf("Elements of this array are:\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
}
void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {

       int indexOfMini = i,temp;
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[j] < arr[indexOfMini])
            {
                indexOfMini = j;
            }

        }
        //swap
            temp = arr[i];
            arr[i] = arr[indexOfMini];
            arr[indexOfMini] = temp;
    }
}

int main()
{
    int n = 6;
    int arr[6] = {45, 2, 34, 90, 67, 22};
    traversal(arr, n);
    selectionSort(arr, n);
    traversal(arr, n);
    return 0;
}