//Insertion
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
}

int indexinsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
}
int main()
{
    int arr[100] = {7, 8, 12, 77, 88};
    int size = 5, element = 45, index = 3;
    indexinsertion(arr, size, element, 100, index);
    size++;
    display(arr, size);

    return 0;
}