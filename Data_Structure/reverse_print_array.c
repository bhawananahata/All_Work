#include <stdio.h>
void Printing(int n,int arr[]){
for(int i=1 ; i<= n ; i++){
        printf("element %d is: %d\n",i,arr[i]);
    }
}
void arrayRev(int n ,int arr[])
{
    int i,str[n];
    
    for (i = 1; i <= n/2; i++)
    {    
        str[i] = arr[i];
        arr[i] = arr[n-i+1];
       
    }
    for (i = 1; i <= n/2; i++)
    {
        arr[n-i+1] = str[i];
       
    }

printf("%s",arr);
}
int main()
{
    int i, n,arr[100];
    printf("Enter the size of array\n");
    scanf("%d",&n);

    printf("Now enter the elements\n");
    for(i=1; i <= n ; i++){
        scanf("%d",&arr[i]);
    }

    Printing(n,arr);
    arrayRev(n,arr);
    printf("Printing array reversly...\n");
    Printing(n,arr);
    
    return 0;
}