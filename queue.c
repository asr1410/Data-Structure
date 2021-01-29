#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

struct Queue
{
    int front, rear, size, capacity;
    int *array;
};

struct Queue *createQueue(int capacity)
{
    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = queue->capacity - 1;
    queue->array = (int *)malloc(queue->capacity * sizeof(int));
    return queue;
}

int isFull(struct Queue *queue)
{
    return (queue->size == queue->capacity);
}

int isEmpty(struct Queue *queue)
{
    return (queue->size == 0);
}

void enqueue(struct Queue *queue, int item)
{
    if (isFull(queue))
    {
        printf("queue is full\n");
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    printf("%d is the enqueued in the queue\n", item);
}

int dequeue(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("queue is empty\n");
        return 0;
    }
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

int front(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("queue is empty\n");
        return 0;
    }
    return queue->array[queue->front];
}

int rear(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("queue is empty\n");
        return 0;
    }
    return queue->array[queue->rear];
}
int main()
{
    struct Queue *queue = createQueue(4);
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    printf("%d dequeued from queue\n\n", dequeue(queue));
    printf("%d dequeued from queue\n\n", dequeue(queue));
    printf("%d dequeued from queue\n\n", dequeue(queue));
    printf("%d dequeued from queue\n\n", dequeue(queue));
    enqueue(queue, 30);
    enqueue(queue, 40);
    printf("Front item is %d\n", front(queue));
    printf("Rear item is %d\n", rear(queue));
    return 0;
}