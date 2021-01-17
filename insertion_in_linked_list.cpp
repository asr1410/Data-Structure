#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

//USER DEFINE NODE
class Node
{
public:
    int data;
    Node *next;
};

//TRAVERSAL OF THE ARRAY
void printLinkedList(Node *head)
{
    int i = 1;
    while (head != NULL)
    {
        cout << "Element at index " << i << " = " << head->data << endl;
        head = head->next;
        i++;
    }
}

//INSERT AT THE HEAD OF THE LINKED LIST
Node *insertAtStart(Node *head)
{
    int value;
    cout << "Enter the number = ";
    cin >> value;
    Node *ptr = new Node();
    ptr->data = value;
    ptr->next = head;
    head = ptr;
    return head;
}

//INSERT BETWEEN THE INDEX
//[1][2][3][4]
void insertAtTheIndex(Node *head)
{
    int value, index;
    cout << "Enter the index = ";
    cin >> index;
    cout << "Enter the number = ";
    cin >> value;
    Node *ptr = new Node();
    ptr->data = value;
    Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
}

//INSERT AT THE END OF THE LINKED LIST
void insertAtEnd(Node *head)
{
    int value;
    cout << "Enter the number = ";
    cin >> value;
    Node *ptr = new Node();
    ptr->data = value;
    Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
}

//INSERT AT THE NODE
void insertAtNode(Node *previous)
{
    int value;
    cout << "Enter the number = ";
    cin >> value;
    Node *ptr = new Node();
    ptr->data = value;
    ptr->next = previous->next;
    previous->next = ptr;
}

int main()
{
    Node *head = NULL;
    Node *two = NULL;
    Node *three = NULL;
    Node *four = NULL;

    head = new Node();
    two = new Node();
    three = new Node();
    four = new Node();

    head->data = 1;
    head->next = two;

    two->data = 2;
    two->next = three;

    three->data = 3;
    three->next = four;

    four->data = 4;
    four->next = NULL;

    //AT THE HEAD
    // head = insertAtStart(head);

    //AT BETWEEN THE NODES;
    // insertAtTheIndex(head);

    //AT THE END
    // insertAtEnd(head);

    //INSERT AT NODE
    // insertAtNode(two);

    //TRAVERSAL OF THE ARRAY
    printLinkedList(head);

    return 0;
}