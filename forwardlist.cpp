#include <bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> list1, list2;
    list1 = {5, 4, 2, 5, 7, 2};
    list2 = {54, 34, 62, 57, 71, 12};
    list1.splice_after(list1.begin(), list2);
    list1.sort();
    // list.unique();
    for (auto &&i : list1)
    {
        cout << i << endl;
    }
    cout << distance(list2.begin(), list2.end());
    return 0;
}