#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int front, rear, size;
    unsigned capacity;
    int *array;
};

Queue *createQueue(unsigned capacity)
{
    Queue *queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = new int[queue->capacity * sizeof(int)];
    return queue;
}

int isFull(Queue *queue)
{
    return (queue->size == queue->capacity);
}

int isEmpty(Queue *queue)
{
    return (queue->size == 0);
}

void enqueue(Queue *queue, int item)
{
    if (isFull(queue))
    {
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    cout << item << " enqueued to queue" << endl;
}

int main()
{
    Queue *queue = createQueue(100);
    return 0;
}