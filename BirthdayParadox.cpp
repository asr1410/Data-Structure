#include <bits/stdc++.h>
using namespace std;
float find(float x)
{
    float pro1 = 1, temp;
    while (x != 0)
    {
        temp = (365 - x) / 365;
        pro1 *= temp;
        x--;
    }
    return pro1;
}
int main()
{
    float number;
    cout << "enter the no of people : ";
    cin >> number;
    cout << "Probablity is " << 1 - find(number);
    return 0;
}