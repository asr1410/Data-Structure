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
void selectionSort(int *arr, int n)
{
}
int main()
{
    int arr[] = {6, 5, 4, 3, 2, 1};
    int num = 6;
    printArray(arr, num);
    selectionSort(arr, num);
    printArray(arr, num);
    return 0;
}