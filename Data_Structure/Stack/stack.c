#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};



int push(struct stack *ptr,int val){
    if(ptr->top == ptr->size-1){
        printf("stack is full !\n");
        return 0;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
        printf("member pushed :%d\n",val);
        return 1;
    }
}
int pop(struct stack*ptr,int val){
    if(ptr->top == -1){
        printf("stack is Empty!\n");
        return 0;
    }
    else{
        val = ptr->arr[ptr->top];
        printf("member poped:%d\n",val);
         ptr->top= ptr->top-1;
         return val;
    }
}
int main()
{
struct stack* s = (struct stack*)malloc(sizeof(struct stack));
 s->size = 80;
 s->top = -1;
 s->arr = (int*)malloc(s->size*sizeof(int));

 
 
push(s,45);
push(s,19);
push(s,82);
push(s,12);
pop(s,12);
for(int i=0;i<=s->top ; i++){
    printf("member NO. %d is %d\n",i,s->arr[i]);
}
return 0;
}