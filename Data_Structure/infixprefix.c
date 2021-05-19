#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack{
int top;
int size;
char *arr;
};
int IsEmpty(struct stack *ptr){
    if(ptr->top == -1){
        //printf("stack is Empty!\n");
        return 1;
}
else{
    //printf("stack is not Empty!\n");
    return 0;
}}
int IsFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        //printf("stack is Full!\n");
        return 1;
}
else{
    //printf("stack is not Full!\n");
    return 0;
}}
int stackTop(struct stack *ptr){
 return ptr->arr[ptr->top];
}
int push(struct stack *ptr,char p){
    if(IsFull(ptr)){
        return 0;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = p;
      //  printf("member pushed :%c\n",p);
        return 1;
    }
}
char pop(struct stack*ptr){
    if(IsEmpty(ptr)){
        return 0;
    }
    else{
        char val =  ptr->arr[ptr->top];
        //printf("member poped:%c\n",val);
         ptr->top--;
         return val;
    }
}
int Presedence(char ch){
if (ch == '*'|| ch == '/'){
    return 3;
}
else if(ch == '+' || ch == '-'){
    return 2;
}
else 
return 0;
}
int IfOperator(char ch){
    if (ch == '*' || ch == '/' ||ch == '+' ||ch == '-'){
        return 1;
    }
    else
    return 0;

}
char *infixToPostfix(char* infix){
   struct stack *sp = (struct stack*)malloc(sizeof(struct stack)) ;
   sp ->size = 80;
   sp ->top = -1;
   sp ->arr = (char*)malloc(sp->size*(sizeof(char)));
   char *postfix = (char*)malloc((strlen(infix)+1)*(sizeof(char)));
   int i=0;  //infix track
   int j=0;   //outfix track
   while(infix[i] != '\0'){
     if(! IfOperator(infix[i])){
        postfix[j] = infix[i];
        j++;
        i++;
      }
      else{

        if(Presedence(infix[i])>Presedence(stackTop(sp))){
            push(sp,infix[i]);
            i++;
        }
        else{
            postfix[j] = pop(sp);
            j++;
        }
      }
   }
   while(! IsEmpty(sp)){
       postfix[j]= pop(sp);
       j++;
   }
   postfix[j] = '\0';
   return postfix;
}


int main(){
   char* infix = "a-b" ;
   printf("postfix is %s\n",infixToPostfix(infix));
    return 0;
}  