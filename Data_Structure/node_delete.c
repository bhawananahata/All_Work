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
//case1 : deleting element from the start.
struct Node *deletFirst(struct Node *head){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
    
}

//case 2: deleting from middle.
struct Node *deletAtIndex(struct Node *head,int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for(int i =0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next = q->next;
    free(q);
    return head;
    
}
//case 3: deleting from the last
struct Node *deletAtEnd(struct Node *head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next != NULL){
        p=p->next;
        q=q->next;
    }
    p->next = q->next;
    free(q);
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
    
   
 //head = deletFirst(head);
 //head = deletAtIndex(head,1);
 head = deletAtEnd(head);
  linkedListTraversal(head);
  
    return 0;
}