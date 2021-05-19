#include <stdio.h>
#include <limits.h>
#include<stdlib.h>

int traversal(int *arr, int n)
{
    printf("Elements of this array are:\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
}
int maximum(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

void countSort(int *arr, int n)
{  
   int i,j;
   int max = maximum(arr, n);
   int  *count = (int *)malloc((max+1)*sizeof(int));

   for(i=0;i<max+1;i++){
       count[i] = 0;
   }

   for(i=0;i<n;i++){
       count[arr[i]] = count[arr[i]] + 1;
   }
 i =0;
 j =0; 
   while(i<=max){
       if(count[i]>0){
           arr[j] = i;
           count[i]--;
           j++;
       }
       else{
           i++;
       }
   }
}

int main()
{
    int n = 6;
    int arr[6] = {9, 2, 24, 5, 13, 22};
    traversal(arr, n);
    countSort(arr, n);
    traversal(arr, n);
    return 0;
}