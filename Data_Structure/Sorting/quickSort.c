#include <stdio.h>

int traversal(int *arr, int n)
{
    printf("Elements of this array are:\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
}
int partition(int arr[], int low, int high)
{

    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j); 
    // swap
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j; 
}
void quickSort(int arr[], int low, int high)
{
    int partitionIndex;
    if(low < high){
    partitionIndex = partition(arr, low , high);
    quickSort(arr, low , partitionIndex - 1);
    quickSort(arr, partitionIndex + 1, high);
    }
}

int main()
{
    int n = 6;
    int arr[6] = {9, 2, 24, 5, 13, 22};
    traversal(arr, n);
    quickSort(arr,0, n-1);
    traversal(arr, n);
    return 0;
}