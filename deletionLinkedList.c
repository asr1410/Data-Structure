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

void printLinkedList(struct Node *head)
{
    int i = 0;
    while (head != NULL)
    {
        printf("element at index %d is %d\n", i, head->data);
        head = head->next;
        i++;
    }
}

//DELETION OF THE HEAD OF THE LINKED LIST
struct Node *deleteHeadOfLinkedList(struct Node *head)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

//DELETION OF THE END OF THE LINKED LIST
struct Node *deleteEndOfLinkedList(struct Node *head)
{
    struct Node *ptr;
    ptr = head->next;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        head = head->next;
    }
    head->next = NULL;
    free(ptr);
}

//DELETE AT INDEX;
struct Node *deletebetweenLinkedList(struct Node *head)
{
    int index;
    printf("Enter the index = ");
    scanf("%d", &index);
    struct Node *ptr;
    ptr = head->next;
    while (index > 1)
    {
        ptr = ptr->next;
        head = head->next;
        index--;
    }
    head->next = ptr->next;
    free(ptr);
}

//DELTE A PARTICULAR VALUE
struct Node *deleteValueLinkedList(struct Node *head)
{
    int value;
    printf("Enter the value to delete\n");
    scanf("%d", &value);
    struct Node *ptr;
    ptr = head->next;
    while (ptr->data != value && ptr->next != NULL)
    {
        head = head->next;
        ptr = ptr->next;
    }
    if (ptr->data == value)
    {
        head->next = ptr->next;
        free(ptr);
    }
}

int main()
{
    struct Node *head = NULL;
    struct Node *two = NULL;
    struct Node *three = NULL;
    struct Node *four = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    two = (struct Node *)malloc(sizeof(struct Node));
    three = (struct Node *)malloc(sizeof(struct Node));
    four = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = two;

    two->data = 2;
    two->next = three;

    three->data = 3;
    three->next = four;

    four->data = 4;
    four->next = NULL;

    // head = deleteHeadOfLinkedList(head);

    // deletebetweenLinkedList(head);

    // deleteEndOfLinkedList(head);

    // deleteValueLinkedList(head);

    // printLinkedList(head);

    return 0;
}