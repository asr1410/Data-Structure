#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
bool has[MAX][2];
bool search(int X)
{
    if (X > 0)
    {
        if (has[X][0] == 1)
        {
            return true;
        }
        return false;
    }
    cout << X << endl;
    X = abs(X);
    cout << X << endl;
    if (has[X][1] == 1)
    {
        return true;
    }
    return false;
}

void insert(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            has[a[i]][0] = 1;
        }
        else
        {
            has[abs(a[i])][1] = 1;
        }
    }
}
int main()
{
    int a[] = {-1, 9, -5, -8, -5, -2};
    int n = sizeof(a) / sizeof(a[0]);
    insert(a, n);
    int X = -2;
    if (search(X) == true)
    {
        cout << "present";
    }
    else
    {
        cout << "not present";
    }
    return 0;
}