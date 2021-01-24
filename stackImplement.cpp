#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    int *arr;
};

int isEmpty(Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    Stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = new int(s->size);
    s->top++;
    if (isEmpty(s))
    {
        cout << "stack is empty";
    }
    else
    {
        cout << "stack is not empty";
    }

    return 0;
}