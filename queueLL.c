#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *f = NULL;
struct Node *r = NULL;

void traversal(struct Node *ptr)
{
    if (ptr == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("printing all the elements of the Queue\n");
        while (ptr != NULL)
        {
            printf("Element %d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

void enqueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = val;
    n->next = NULL;
    if (f == NULL)
    {
        f = r = n;
    }
    else
    {
        r->next = n;
        r = n;
    }
}

void dequeue()
{
    int val;
    struct Node *current = f;
    if (f == NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        f = f->next;
        val = current->data;
        free(current);
        printf("dequeued value is %d\n", val);
    }
}
void front(struct Node *ptr)
{
    if (ptr == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("front value is %d\n", f->data);
    }
}
void rear(struct Node *ptr)
{
    if (ptr == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("rear value is %d\n", r->data);
    }
}

int main()
{
    traversal(f);
    front(f);
    rear(r);
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    front(f);
    rear(r);
    traversal(f);
    return 0;
}