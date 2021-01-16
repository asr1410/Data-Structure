#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

class MyArray
{
private:
    int *ptr;
    int total_size;
    int used_size;

public:
    MyArray(int tSize, int uSize)
    {
        total_size = tSize;
        used_size = uSize;
        ptr = new int[tSize];
    }
    void set_value()
    {
        cout << "Enter the elements" << endl;
        for (int i = 0; i < used_size; i++)
        {
            cin >> *(ptr + i);
        }
    }
    void get_Value()
    {
        cout << "Stored value in array" << endl;
        for (int i = 0; i < used_size; i++)
        {
            cout << *(ptr + i) << endl;
        }
        cout << sizeof(ptr);
    }
};
int main()
{
    MyArray marks(100, 2);
    marks.set_value();
    marks.get_Value();
    return 0;
}