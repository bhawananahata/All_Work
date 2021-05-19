#include <stdlib.h>
#include <stdio.h>
struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};
void creatarray(struct myarray *a, int tsize, int usize)
{
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}

void show(struct myarray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

void setValue(struct myarray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

int main()
{   
    int total_size,elements;
    struct myarray marks;
    printf("Enter the size of Array\n");
    scanf("%d",&total_size);
    printf("Enter the size of Array You want to fill\n");
    scanf("%d",&elements);
    creatarray(&marks, total_size, elements);
    printf("we are running setvalue now\n");
    setValue(&marks);

    printf("we are running show now\n");
    show(&marks);
    return 0;
}