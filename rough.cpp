#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *ifEmpty(Node *head)
{
    if (head != NULL)
    {
        return head;
    }
    int value;
    cout << "enter the value = ";
    cin >> value;
    Node *ptr = new Node();
    ptr->data = value;
    head = ptr;
    head->next = head;
    return head;
};

Node *inBegin(Node *head)
{
    if (head == NULL)
    {
        return ifEmpty(head);
    }
    int value;
    cout << "Enter the value = ";
    cin >> value;
    Node *ptr = new Node();
    ptr->data = value;
    head = ptr;
    head->next = ptr;
    return head;
}
Node *inEnd(Node *head)
{
    if (head == NULL)
    {
        return ifEmpty(head);
    }
    Node *ptr = new Node();
    ptr->next = head->next;
    head->next = ptr;
    head = ptr;
    return head;
}
void traversal(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty";
    }
    Node *current = head->next;
    do
    {
        cout << current->data;
        current = current->next;
    } while (current != head->next);
}

int main()
{
    Node *head = NULL;
    head = ifEmpty(head);
    head = inBegin(head);
    head = inEnd(head);
    traversal(head);
    return 0;
}