#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
}

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("queue overflow");
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("NO element to dequeuw");
    }
    else
    {
        q->f++;
        a = q->arr[q->r];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 10;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    return 0;
}