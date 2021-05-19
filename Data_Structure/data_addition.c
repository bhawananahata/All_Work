#include<stdio.h>
#include<stdlib.h>
void display ( int arr[],int n){
    for(int i= 0; i<n ; i++){
        printf("%d element of the array is:%d\n",i,arr[i]);
    }
}
void content (int arr[] ,int size ,int index,int element, int capacity ){
 if(size >= capacity){
     printf("Sorry!Size is full\n");
 }
 else{
     for(int i = size - 1; i >= index ; i--){
         arr[i+1]= arr[i];
     }
     arr[index] = element;
 }
}


int main(){
    int arr[100] = {1,23,34,56};
    int size = 4 , index = 2, element = 45;
     
    content (arr, size , index , element, 100);
    display(arr,size+1);

    return 0;
}