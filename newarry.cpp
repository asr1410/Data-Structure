#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}
void createSubarray(int newArr[], int newSize, int arr[], int size)
{
    int sum = 0, k = 0;
    for (int i = 0, j = 1; j < size, i < size; j + 2, i + 2)
    {
        sum = arr[i] + arr[j];
        newArr[k] = sum;
        k++;
    }
    for (int i = 0; i < newSize; i++)
    {
        cout << newArr[i] << " ";
    }
    // int num = findGCD(newArr, newSize);
    // cout << endl;
    // cout << num;
}

//[1][2][3][4][5][6][7][8][9][10][11][12][13][14][15][16]
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // sort(arr, arr + size);
    int newSize = size / 2;
    int newArr[newSize];
    createSubarray(newArr, newSize, arr, size);

    return 0;
}