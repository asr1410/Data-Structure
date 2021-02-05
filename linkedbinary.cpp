#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

//function for creating node
struct Node *createNode(int data)
{
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
int main()
{
    // struct Node *p;
    // p = (struct Node *)malloc(sizeof(struct Node));
    // p->data = 2;
    // p->left = NULL;
    // p->right = NULL;

    // struct Node *p1;
    // p1 = (struct Node *)malloc(sizeof(struct Node));
    // p1->data = 1;
    // p1->left = NULL;
    // p1->right = NULL;

    // struct Node *p2;
    // p2 = (struct Node *)malloc(sizeof(struct Node));
    // p2->data = 4;
    // p2->left = NULL;
    // p2->right = NULL;

    //create node using with help of function
    struct Node *p = createNode(2);
    struct Node *p1 = createNode(4);
    struct Node *p2 = createNode(4);

    //linking of root node with with children node
    p->left = p1;
    p->right = p2;
    return 0;
}