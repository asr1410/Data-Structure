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
//  12, 35, 4, 65, 2, 8, 67, 11    key =35 i=1  j=0
//   0   1  2  3   4  5   6   7
void insertionSort(int *A, int n)
{
    int key, j;
    // Loop for passes
    for (int i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;
        // Loop for each pass
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        cout << "[" << j << "]";
        A[j + 1] = key;
    }
}
int main()
{
    int arr[] = {12, 35, 4, 65, 2, 8, 67, 11};
    int num = 8;
    printArray(arr, num);
    insertionSort(arr, num);
    printArray(arr, num);
    return 0;
}