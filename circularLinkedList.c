#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void printLinkedList(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("element are %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    free(ptr);
}

//INSERTION IN LINKED LIST
struct Node *insertionCircularLinkedList(struct Node *head)
{
    int value;
    printf("Enter the value = ");
    scanf("%d", &value);
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = value;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *fourth = NULL;
    struct Node *fifth = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    //Initialize value of first node
    head->data = 1;
    head->next = second;

    //Initialize value of second node
    second->data = 2;
    second->next = third;

    //Initialize value of third node
    third->data = 3;
    third->next = fourth;

    //Initialize value of fourth node
    fourth->data = 4;
    fourth->next = fifth;

    //Initialize value of fifth node
    fifth->data = 5;
    fifth->next = head;

    //insertion at the head of linked list
    head = insertionCircularLinkedList(head);

    //traversal in the linked list
    printLinkedList(head);
    return 0;
}