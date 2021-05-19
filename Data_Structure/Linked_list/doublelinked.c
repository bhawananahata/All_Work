#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
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
// case 1

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    ptr->prev = NULL;
    head = ptr;
    return head;
}
// case 2
struct Node *insertAtBtw(struct Node *head, int data, int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    struct Node *q = head->next;
    while (p->data != value)
    {
        p = p->next;
        q = q->next;
    }
    p->next = ptr;
    ptr->next = q;
   
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

    head->data = 7;
    head->next = second;
    head->prev = NULL;

    second->data = 12;
    second->next = third;
    second->prev = head;

    third->data = 23;
    third->next = forth;
    third->prev = second;

    forth->data = 69;
    forth->next = NULL;
    forth->prev = third;

    //CircularlinkedListTraversal(head,forth);
    // printf("\n");
    // head = insertAtFirst(head,99);
    head = insertAtBtw(head, 66, 12);
    head = insertAtBtw(head, 83, 7);
    linkedListTraversal(head);
    return 0;
}