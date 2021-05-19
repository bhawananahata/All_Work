#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
// case1
struct Node*insertAtFirst(struct Node *head ,int data){
   struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
   ptr->data = data;
   
   ptr->next = head;
   return ptr;

}
// case2
struct Node*insertInBtw (struct Node *head ,int data, int index){
   struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
   struct Node*p = head;
   int i =0;
   while (i!=index-1){
       p = p->next;
       i++;
   }

   ptr->data = data;
   
   ptr->next = p->next;
   p->next = ptr;
   return head;

}
// case3
struct Node*insertAtEnd(struct Node *head ,int data){
   struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node*p = head;
    while (p->next!= NULL){
       p = p->next;
   }
   ptr->data = data;
   
   ptr->next = NULL;
   p->next = ptr;
   return head;

}
//case4
struct Node*insertAtNode(struct Node *head ,struct Node *pNode ,int data){
   struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
     ptr->data = data;
   
     ptr->next = pNode->next;
       pNode->next= ptr;
   

   return head;

}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    // linking the Nodes

    head->data = 7 ;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 23;
    third->next = NULL;
   
 head = insertAtNode(head,second,999);
  linkedListTraversal(head);
  
    return 0;
}