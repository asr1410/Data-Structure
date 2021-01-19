#include <iostream>
using namespace std;
#define K 1000000

long int countEvenSum(long int arr[], long int n)
{
    long int temp[2] = {1, 0};
    long int result = 0, sum = 0;
    for (long int i = 0; i <= n - 1; i++)
    {
        sum = ((sum + arr[i]) % 2 + 2) % 2;
        temp[sum]++;
    }
    result = result + (temp[0] * (temp[0] - 1) / 2);
    result = result + (temp[1] * (temp[1] - 1) / 2);
    return (result);
}

int main()
{
    long int cases, size;
    cin >> cases;
    while (cases != 0)
    {
        cin >> size;
        long int *arr = new long int[1000000];
        for (long int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << countEvenSum(arr, size) << endl;
        cases--;
    }

    return 0;
}