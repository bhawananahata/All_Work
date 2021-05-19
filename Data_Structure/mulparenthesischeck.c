#include<stdio.h>
#include<stdlib.h>

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
       // printf("stack is Full!\n");
        return 1;
}
else{
   // printf("stack is not Full!\n");
    return 0;
}}

int push(struct stack *ptr,char p){
    if(IsFull(ptr)){
        return 0;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = p;
        printf("member pushed :%c\n",p);
        return 1;
    }
}
char pop(struct stack*ptr,char kit){
    if(IsEmpty(ptr)){
        return 0;
    }
    else{
        if(kit == ptr->arr[ptr->top] ){
         char val =  ptr->arr[ptr->top];
         printf("member poped:%c\n",val);
         ptr->top--;
         return val;}
         else {
             return 0;
         }
    }
}
int MulparenthesisCheck(char *exp){
    struct stack* sp;;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char*)malloc(sp->size*sizeof(char));

    for(int i=0 ; exp[i] != '\0' ;i++ ){
    if(exp[i] =='('){
        push(sp ,'(');
    }
    else if(exp[i] =='['){
        push(sp ,'[');
    }
    else if(exp[i] =='{'){
        push(sp ,'{');
    }
    else if(exp[i]==')'){
      pop(sp,'(');
    }
    else if(exp[i]==']'){
      pop(sp,'[');
    }
    else if(exp[i]=='}'){
      pop(sp,'{');
    }  

}

if(IsEmpty(sp)){
    printf("Empty\n");
    return 1;
}
else{
    printf("Not Empty\n");
    return  0;
}
}

int main(){
    char* exp = "{[8/(9+0)]*(9+7)}";

if(MulparenthesisCheck(exp)){
    printf("prenthesis matching\n");
}
else{
    printf("Not matching\n");
}
    return 0;
}