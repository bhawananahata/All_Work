#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void CircularlinkedListTraversal(struct Node *head)
{
   struct Node* ptr = head;
    do{
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
    while (ptr != head) ;

}
// case 1

struct Node *insertAtFirst(struct Node*head,int data){
 struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
 ptr->data = data;
 struct Node*p = head->next;
 while(p->next != head){
     p = p->next;
 }
  p->next = ptr;
  ptr->next = head;
  head = ptr;
  return head;
} 

// case 2

struct Node *insertAtBtw(struct Node*head,int data,int value){
 struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
 ptr->data = data;
 struct Node*p = head;
 struct Node*q = head->next;
 while(p->data != value){
     p = p->next;
     q = q->next;
 }
  p->next = ptr;
  ptr->next = q;
  head = ptr;
  return head;
} 

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    // linking the Nodes

    head->data = 7 ;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 23;
    third->next = forth;

    forth->data = 69;
    forth->next = head;
    
    CircularlinkedListTraversal(head);
    printf("\n");
   // head = insertAtFirst(head,99);
    head = insertAtBtw(head,66,12);
    CircularlinkedListTraversal(head);
    return 0;
    }