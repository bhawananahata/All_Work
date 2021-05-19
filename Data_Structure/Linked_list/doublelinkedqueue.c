#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int IsEmpty()
{
    if (r == f)
    {
        printf("stack is Empty!\n");
        return 1;
    }
    else
    {
        printf("stack is not Empty!\n");
        return 0;
    }
}



void enqueueFront(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n==NULL)
    {
        printf("Queue is Overflow\n");
    }
    else
    {
        n->data = data;
        n->next = NULL;
        n->prev = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            n->next = f;
            f = n;
        }
    }
}
void enqueueBack(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n==NULL)
    {
        printf("Queue is Overflow\n");
    }
    else
    {
        n->data = data;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {   
            r->next = n;
            n->prev = r;
            r = n;
        }
    }
}
int dequeueFront()
{
    int val = -1;
    struct Node *ptr = f;
    if (f==NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        f->prev = NULL;
        free(ptr);
    }
    return val;
}
int dequeueBack()
{
    int val = -1;
    struct Node *ptr = r;
    if (f==NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        r = r->prev;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main()
{
    // linkedListTraversal(f);
    //printf("Dequeuing element %d\n", dequeue());
    enqueueFront(34);
    enqueueFront(4);
    enqueueFront(7);
    enqueueBack(17);
    printf("Dequeuing element %d\n", dequeueFront());
     printf("Dequeuing element %d\n", dequeueBack());
    //printf("Dequeuing element %d\n", dequeueBack());
    //printf("Dequeuing element %d\n", dequeue());
    linkedListTraversal(f);
    //linkedOpp(f);
    return 0;
}