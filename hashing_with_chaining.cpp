#include <bits/stdc++.h>
using namespace std;

class Hash
{
private:
    int bucket;
    list<int> *table;

public:
    Hash(int size);
    void insertItem(int element);
    void deleteItem(int element);
    int hashFunction(int element)
    {
        return (element % bucket);
    }
    void displayTable();
};

Hash::Hash(int size)
{
    bucket = size;
    table = new list<int>[bucket];
}

void Hash::insertItem(int element)
{
    int index = hashFunction(element);
    table[index].push_back(element);
}

void Hash::deleteItem(int element)
{
    int index = hashFunction(element);
    list<int>::iterator i;
    for (i = table[index].begin(); i != table[index].end(); i++)
    {
        if (*i = element)
        {
            break;
        }
    }
    if (i != table[index].end())
    {
        table[index].erase(i);
    }
}
void Hash::displayTable()
{
    for (int i = 0; i < bucket; i++)
    {
        cout << i;
        for (auto ele : table[i])
            cout << " --> " << ele;
        cout << endl;
    }
}
int main()
{
    int capacity, temp;
    cout << "Enter the size --> ";
    cin >> capacity;
    Hash h(7);
    cout << "Enter the elements" << endl;
    for (int i = 0; i < capacity; i++)
    {
        cin >> temp;
        h.insertItem(temp);
    }
    cout << "Enter the item to delete --> ";
    cin >> temp;
    h.deleteItem(temp);
    cout << "Display of Hash table" << endl;
    h.displayTable();
    return 0;
}