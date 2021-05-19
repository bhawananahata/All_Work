#include <stdio.h>

int traversal(int *arr, int n)
{
    printf("Elements of this array are:\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
}
void insertionSort(int *arr, int n)
{
    
    for (int i = 1; i < n ; i++)
    {
        int key,j;

        key = arr[i];
        j = i-1;
        while(j>=0 && key < arr[j])  {
            arr[j+1]=arr[j];
             j--;
        } 
       arr[j+1] = key;
       
    }
}

int main()
{
    int n = 6;
    int arr[6] = {45, 2, 34, 90, 67, 22};
    traversal(arr, n);
    insertionSort(arr, n);
    traversal(arr, n);
    return 0;
}