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

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr)
{
    if (isFull(ptr))
    {
        printf("Stack overflow, Cannot push the element\n");
    }
    else
    {
        int value;
        printf("Enter the value = ");
        scanf("%d", &value);
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow, Cannot pop the element\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr)
{
    int i;
    printf("enter the index to peek = ");
    scanf("%d", &i);
    int arrayInd = ptr->top - i + 1;
    if (arrayInd < 0)
    {
        printf("Not a valid position for the stack");
        return -1;
    }
    else
    {
        return ptr->arr[arrayInd];
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    printf("stack has been implemented successfully\n");
    printf("Before push Full : %d\n", isFull(s));
    printf("Before pushing empty : %d\n", isEmpty(s));
    push(s);
    push(s);
    push(s);
    push(s);
    push(s);
    push(s);
    push(s);
    push(s);
    push(s);
    push(s); //push 10 values
    push(s); //stack is full
    printf("top value is %d\n", s->top);
    printf("After pushing Full : %d\n", isFull(s));
    printf("After pushing Empty : %d\n", isEmpty(s));

    printf("POP %d from the stack\n", pop(s));
    printf("POP %d from the stack\n", pop(s));
    printf("POP %d from the stack\n", pop(s));
    printf("top value is %d\n", s->top);

    for (int i = 0; i < s->top + 1; i++)
    {
        printf("the value at index is %d\n", peek(s));
    }

    return 0;
}