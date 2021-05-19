#include <stdio.h>

int traversal(int *arr, int n)
{
    printf("Elements of this array are:\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
}
int merge(int arr[], int mid, int low, int high)
{

    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i <= high; i++)
    {
        arr[i] = b[i];
    }
}
void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, mid, low, high);
    }
}

int main()
{
    int n = 6;
    int arr[6] = {9, 2, 24, 5, 13, 22};
    traversal(arr, n);
    mergeSort(arr, 0, 5);
    traversal(arr, n);
    return 0;
}