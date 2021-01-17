#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << "The elements are " << head->data << endl;
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *three = NULL;
    Node *fourth = NULL;

    head = new Node();
    second = new Node();
    three = new Node();
    fourth = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = three;

    three->data = 3;
    three->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    printLinkedList(head);

    return 0;
}
