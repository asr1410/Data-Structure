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
    cout << "running selection sort\n";
    int indexOfMin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
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