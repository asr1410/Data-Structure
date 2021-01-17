#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element)
{
    int start, mid, end;
    start = 0;
    end = size - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    // int arr[] = {3, 5, 75, 3, 2, 5, 65, 3, 23, 654, 34, 2, 23, 34, 76, 21, 87, 22};//unsorted array linear search
    int arr[100000]; //SORTED ARRAY
    for (int i = 0; i < 100000; i++)
    {
        arr[i] = i;
    }
    int size, element;
    size = sizeof(arr) / sizeof(int);
    printf("Enter the element :- ");
    scanf("%d", &element);
    printf("the elemnt %d is present at %d index using binary search.\n", element, binarySearch(arr, size, element));
    printf("the elemnt %d is present at %d index using linear search.", element, linearSearch(arr, size, element));
    return 0;
}