#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

//function for creating node for the tree
struct Node *createNode(int data)
{
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void postorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data;
    }
}
int main()
{

    //create node using with help of function
    struct Node *p = createNode(2);
    struct Node *p1 = createNode(4);
    struct Node *p2 = createNode(4);

    //linking of root node with with children node
    p->left = p1;
    p->right = p2;

    postorderTraversal(p);
    return 0;
}