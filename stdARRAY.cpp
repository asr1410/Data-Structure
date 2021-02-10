#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 6> data1 = {1, 2, 3, 4, 5, 6};
    array<int, 6> data2{1, 2, 3, 4, 5, 6};
    array<int, 6> data3;
    data3 = data2;
    const char *cstr = "Test string";
    array<char, 12> charray;
    memcpy(charray.data(), cstr, 12);
    cout << "front value is " << data1.front() << endl;
    cout << "Back value is " << data1.back() << endl;
    cout << "size is " << data1.size() << endl;
    cout << "max size is " << data1.max_size() << endl;
    cout << "empty " << data1.empty() << endl;
    for (auto elem : data1)
        cout << elem << " ";
    cout << endl;
    for (auto elem = data1.begin(); elem != data1.end(); elem++)
        cout << *elem << " ";
    cout << endl;
    for (auto elem = data1.rbegin(); elem != data1.rend(); elem++)
        cout << *elem << " ";
    cout << endl;
    for (auto elem = data1.cbegin(); elem != data1.cend(); elem++)
        cout << *elem << " ";
    cout << endl;
    for (auto elem = data1.crbegin(); elem != data1.crend(); elem++)
        cout << *elem << " ";
    cout << endl;
    for (auto i = 0; i < data1.size(); i++)
        cout << data1.at(i) << " ";
    cout << endl;
    cout << charray.data() << endl;
    data1.fill(0);
    for (auto elem : data1)
        cout << elem << " ";
    cout << endl;
    data1.swap(data2);
    for (auto elem : data1)
        cout << elem << " ";
    cout << endl;
    for (auto elem : data2)
        cout << elem << " ";
    cout << endl;

    return 0;
}