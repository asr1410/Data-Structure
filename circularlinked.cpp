#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *addToEmpty(Node *head)
{
    int value;
    cout << "Enter the value : ";
    cin >> value;
    if (head != NULL)
    {
        return head;
    }
    Node *current = new Node();
    current->data = value;
    head = current;
    head->next = head;
    return head;
}

Node *addBegin(Node *head)
{
    int value;
    if (head == NULL)
    {
        return addToEmpty(head);
    }
    cout << "Enter the value : ";
    cin >> value;
    Node *previous = new Node();
    previous->data = value;
    previous->next = head->next;
    // cout << "head.next = " << head->next << endl;
    // cout << "head = " << head << endl;
    head->next = previous;
    return head;
}

Node *addEnd(Node *head)
{
    int value;
    if (head == NULL)
    {
        return addToEmpty(head);
    }
    cout << "Enter the value : ";
    cin >> value;
    Node *next = new Node();
    next->data = value;
    next->next = head->next;
    head->next = next;
    head = next;
    return head;
}

Node *addAfter(Node *head)
{
    int givenValue, value;
    if (head == NULL)
    {
        return NULL;
    }
    cout << "Enter the value : ";
    cin >> value;
    cout << "Enter after the value : ";
    cin >> givenValue;
    Node *current, *next;
    current = head->next;
    do
    {
        if (current->data == givenValue)
        {
            next = new Node();
            next->data = value;
            next->next = current->next;
            current->next = next;
            if (current == head)
                head = next;
            return head;
        }
        current = current->next;
    } while (current != head->next);

    cout << givenValue << "not present in the list." << endl;
    return head;
}

void traverse(Node *head)
{
    Node *current;
    if (head == NULL)
    {
        cout << "list is empty";
        return;
    }
    current = head->next;

    do
    {
        cout << current->data << " ";
        current = current->next;
    } while (current != head->next);
}
int main()
{
    Node *head = NULL;
    head = addToEmpty(head);
    head = addBegin(head);
    head = addBegin(head);
    // head = addEnd(head);
    // head = addEnd(head);
    // head = addAfter(head);
    traverse(head);

    return 0;
}