#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int traversal(struct queue *ptr){
    for(int i= ptr->f +1 ; i<= ptr->r ;i++){
    printf("Elements of this queue are %d\n",ptr->arr[i]) ;}
} 
int IsEmpty(struct queue *ptr){
    if(ptr->r == ptr->f){
       // printf("stack is Empty!\n");
        return 1;
}
else{
  //  printf("stack is not Empty!\n");
    return 0;}}

int IsFull(struct queue *ptr){
    if((ptr->r +1)%ptr->size == ptr->f){
       // printf("stack is Full!\n");
        return 1;
}
else{
  //  printf("stack is not Full!\n");
    return 0;
}}
void enqueue(struct queue*q,int data){
if((q->r+1)%(q->size) == q->f){
printf("queue overflow\n");
}
else{
    q->r = (q->r +1)%q->size;
    q->arr[q->r] = data;
}

}
int dequeue(struct queue *q){
     int a = -1;
if(IsEmpty(q)){
// printf("Queue is Empty\n");
}
else{
    q->f = (q->f +1)% q->size;
    a = q->arr[q->f];}
    //printf("hye\n");
    return a;
}
int main(){
   struct queue* q = (struct queue*)malloc(sizeof(struct queue)); 
   q->size = 20;
   q->r = 0;
    q->f =0;
   q->arr = (int *)malloc(q->size*(sizeof(int))) ;
 
   enqueue(q,78);
   enqueue(q,34);  
   traversal(q);
   printf("element are getting dequeued %d\n" ,dequeue(q));
   printf("element are getting dequeued %d\n" ,dequeue(q));
   traversal(q);
    if(IsEmpty(q)){
        printf("Empty");
    }
    else{
        printf("still not empty\n");
    }

    
    return 0;
}