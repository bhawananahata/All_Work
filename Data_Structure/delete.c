#include<stdio.h>
#include<stdlib.h>
void display ( int arr[],int n){
    for(int i=0;i<n ; i++){
        printf("%d element of the array is:%d\n",i,arr[i]);
    }
}
void delete (int arr[] ,int size ,int index){
 
 
     for(int i = index; i < size ; i++){
         arr[i]= arr[i+1];
     }
     
}


int main(){
    int arr[100] = {1,23,34,56};
    int size = 4 , index = 2;
     
    delete (arr, size , index);
    display(arr,size-1);

    return 0;
}