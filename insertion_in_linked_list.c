#include <stdio.h>
#include <stdlib.h>
//NODE FOR LINKED LIST
struct Node
{
    int data;
    struct Node *next;
};

//FUNCTION TO PRINT THE LINKED LIST
void printLinkedList(struct Node *n)
{
    while (n != NULL)
    {
        printf("element are %d\n", n->data);
        n = n->next;
    }
}

//FUNCTION TO PRINT AT THE BEGIN
struct Node *insertAtBegin(struct Node *head)
{
    int new;
    printf("Enter the element = ");
    scanf("%d", &new);
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = new;
    ptr->next = head;
    head = ptr;
    return head;
};

//FUNCTION TO INSERT THE VALUE AT INDEX
// [1][2][3][4][5]
struct Node *insertAtIndex(struct Node *head)
{
    int new, index;
    printf("Enter the index = ");
    scanf("%d", &index);
    printf("Enter the element = ");
    scanf("%d", &new);
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = new;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

//INSERT AND END
struct Node *insertAtEnd(struct Node *head)
{
    int new;
    printf("Enter the element = ");
    scanf("%d", &new);
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = new;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
};

//INSERT AT A NODE
void insertAfterNode(struct Node *third)
{
    int new;
    printf("Enter the element = ");
    scanf("%d", &new);
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = new;
    ptr->next = third->next;
    third->next = ptr;
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
    fifth->next = NULL;

    //FUNCTION WILL RETURN THE ADDRESS OF NEW HEAD
    // head = insertAtBegin(head);

    //INSERT AT INDEX
    // head = insertAtIndex(head);

    //INSERT AT END
    // head = insertAtEnd(head);

    //INSERT AFTER NODE
    // insertAfterNode(third);

    //traversal in the linked list
    printLinkedList(head);
    return 0;
}