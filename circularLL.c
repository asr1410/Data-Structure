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

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *insertatfirst(struct Node *head, int data)
{
    struct node *ptr = (struct Node)
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *four;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    four = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = four;

    four->data = 1;
    four->next = head;
    linkedListTraversal(head);
    return 0;
}