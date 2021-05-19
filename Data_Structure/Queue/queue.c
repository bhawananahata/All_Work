#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int traversal(struct queue *ptr){
    for(int i=0 ; i<= ptr->r ;i++){
    printf("Elements of this queue are %d\n",ptr->arr[i]) ;}
}
int IsEmpty(struct queue *ptr){
    if(ptr->r == -1){
       // printf("stack is Empty!\n");
        return 1;
}
else{
  //  printf("stack is not Empty!\n");
    return 0;}}

int IsFull(struct queue *ptr){
    if(ptr->r == ptr->size-1){
       // printf("stack is Full!\n");
        return 1;
}
else{
  //  printf("stack is not Full!\n");
    return 0;
}}
void enqueue(struct queue*ptr,int data){
ptr->r++;
ptr->arr[ptr->r] = data;

}
int dequeue(struct queue *q){
     int a = -1;
if(IsEmpty(q)){
// printf("Queue is Empty\n");
}
else{
    q->f++;
    a = q->arr[q->f] ;}
    //printf("hye\n");
    return a;
}
int main(){
   struct queue* q = (struct queue*)malloc(sizeof(struct queue)); 
   q->size = 20;
   q->r = -1;
    q->f =-1;
   q->arr = (int *)malloc(q->size*(sizeof(int))) ;
 
   enqueue(q,78);
   enqueue(q,34);  
     traversal(q); 
    printf("element are getting dequeued %d\n" ,dequeue(q));
    printf("element are getting dequeued %d\n" ,dequeue(q));
   // dequeue(q);
    if(IsEmpty(q)){
        printf("Empty");
    }
    else{
        printf("still not empty\n");
    }
  //  enqueue(q,4);
 //  traversal(q); 
    
    return 0;
}