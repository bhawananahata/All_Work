#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int IsEmpty(struct Node*top){
if(top==NULL){
    return 1;
}
else{
    return 0;
}
}

int IsFull(struct Node*top){
 struct Node*p = (struct Node*)malloc(sizeof(struct Node));
 if(p == NULL){
  return 1;
 }   
 else {
     return 0;
 }
}


struct Node* push(struct Node*top , int data){
  if(IsFull(top)){
      printf("stack is overflow\n");
  }
  else{
      struct Node* n = (struct Node*)malloc(sizeof(struct Node));
      n->data = data;
       printf("Element pushed of is %d\n",n->data);
      n->next = top;
      top = n;
      return top;
     
  }

}

struct Node* pull(struct Node*top){
  if(IsEmpty(top)){
      printf("stack is empty\n");
  }
  else{
      printf("Element pulled of is %d\n",top->data);
      top =  top->next;
      return top;

  }

}
int peek(struct Node*top,int pos){
    struct Node*p = top;
    for(int i=0;(i<pos-1 && p != NULL); i++){
        p = p->next;
    }
 printf("Element no. %d is %d\n",pos,p->data);
 if(p == NULL){
     return p->data;
 }
 else {
     return -1;
 }
}

int main(){

    struct Node * top = NULL;
   top = push(top,78);
   top = push(top,11);
   top = push(top,45);
   top = pull(top);
linkedListTraversal(top);
peek(top,2);
    return 0;
}