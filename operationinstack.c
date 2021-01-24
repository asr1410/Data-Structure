#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return -1;
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("stack overflown");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
void pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflown");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        printf("%d is popped out", val);
    }
}

int main()
{
    struct stack *ptr;
    ptr->size = 3;
    ptr->top = -1;
    ptr->arr = (int *)malloc(ptr->size * sizeof(int));
    isEmpty(ptr);

    return 0;
}