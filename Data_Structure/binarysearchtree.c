#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *creatNode(int data)
{
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
/*void preTraversal(struct Node* ptr){
    if(ptr != NULL){
    printf("%d ",ptr->data);
    traversal(ptr->left);
    traversal(ptr->right);}
} */
/*void postTraversal(struct Node* ptr){
    if(ptr != NULL){
        postTraversal(ptr->left);
        postTraversal(ptr->right);
         printf("%d ",ptr->data);
    }
}*/
void inTraversal(struct Node *ptr)
{
    if (ptr != NULL)
    {
        inTraversal(ptr->left);

        printf("%d ", ptr->data);
        inTraversal(ptr->right);
    }
}
// binary tree ? binary search : 0

/*int Isbst(struct Node *ptr)
{
   static struct Node *x = NULL;
    if (ptr != NULL)
    {
        if (!Isbst(ptr->left))
        {
            return 0;
        }
        if (x != NULL && ptr->data <= x->data)
        {
            return 0;
        }
        x = ptr;
        return Isbst(ptr->right);
        
    }
     else
        {
            return 1;
        }
}
*/
// searching of a element

/* int IsPresent(struct Node *ptr , int data){
if(ptr != NULL){
    if(ptr->data == data){
        return data;
    }
    if(data > ptr->data){
        IsPresent(ptr->right,data);
    }
    else if (data < ptr->data){
         IsPresent(ptr->left,data);
    }
    else{
        return 0;
    }
}
else
return 0;

}
*/
// intsertion of a Node
void InsertNode(struct Node *ptr, int data)
{
    struct Node *x = NULL;

    while (ptr != NULL)
    {
        x = ptr;
        if (data == ptr->data)
        {
            return;
        }
        else if (ptr->data < data)
        {
            ptr = ptr->right;
        }
        else
        {
            ptr = ptr->left;
        }
    }
    struct Node *n = creatNode(data);
    if (data > x->data)
    {
        x->right = n;
    }
    else
    {
        x->left = n;
    }
}

int main()
{
   
    struct Node *p = creatNode(50);
    struct Node *p2 = creatNode(75);
    struct Node *p1 = creatNode(40);
    struct Node *p4 = creatNode(42);
      struct Node *p3 = creatNode(20);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
   
    InsertNode(p, 11);
    printf("%d\n",p1->right->right->data);
   
    inTraversal(p);
    /*  if (IsPresent(p, data))
    {
        printf("found : %d", IsPresent(p, data));
    }
    else
        printf("Not Found :%d", data);*/
    return 0;
}