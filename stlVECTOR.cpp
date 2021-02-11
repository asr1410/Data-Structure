#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> base(5);
    vector<int> first;
    vector<int> second(4, 100);
    vector<int> third(second.begin(), second.end());
    vector<int> fourth = third;
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> fifth(arr, arr + sizeof(arr) / sizeof(int));
    fifth.reserve(20);     //reserve the capacity for the array
    fifth.resize(10);      //create the array of defined size
    fifth.shrink_to_fit(); //change capacity to filled element
    fifth.empty();         //check weather the vector is empty or not
    // fifth.assign(7, 100);  //assign values with given number
    vector<int>::iterator it;
    it = fifth.begin();
    int *i = fifth.data();
    fifth.insert(it, 5, 100);
    fifth.erase(fifth.begin(), fifth.begin() + 5);
    fifth.erase(fifth.begin() + 5, fifth.end());
    // fifth.swap(base);
    // fifth.clear();//clear the array
    fifth.emplace(fifth.begin(), 0);
    fifth.emplace_back(6);
    fifth.emplace(fifth.end(), 0);
    cout << "address of fifth " << fifth.data() << endl;
    cout << "size of fifth " << fifth.size() << endl;
    cout << "max size of fifth " << fifth.max_size() << endl;
    cout << "capacity of fifth " << fifth.capacity() << endl;
    // cout << "value at index 6 " << fifth[6] << endl;
    // cout << "value at index 6 " << fifth.at(6) << endl;
    cout << "front of vector " << fifth.front() << endl;
    cout << "end of vector " << fifth.back() << endl;
    cout << "the element of fifth " << endl;
    fifth.push_back(10);
    fifth.pop_back();
    for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (vector<int>::reverse_iterator it = fifth.rbegin(); it != fifth.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (vector<int>::const_iterator it = fifth.cbegin(); it != fifth.cend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (vector<int>::const_reverse_iterator it = fifth.crbegin(); it != fifth.crend(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}