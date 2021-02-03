#include <bits/stdc++.h>
using namespace std;
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int getMaximum(int *a, int l)
{
    int max = 0;
    for (int i = 0; i < l; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
void countSort(int *a, int l, int m)
{
    int b[m + 1], temp;
    memset(b, 0, sizeof(b));
    for (int i = 0; i < l; i++)
    {
        temp = a[i];
        b[temp] = b[temp] + 1;
    }
    int n = 0;
    for (int i = 0; i < m + 1; i++)
    {
        while (b[i] > 0)
        {
            a[n] = i;
            n++;
            b[i] = b[i] - 1;
        }
    }
}

int main()
{
    int arr[] = {5, 3, 2, 1, 1, 6, 7, 9, 15};
    int len = sizeof(arr) / sizeof(arr[0]);
    int max = getMaximum(arr, len);
    printArray(arr, len);
    countSort(arr, len, max);
    printArray(arr, len);
    return 0;
}