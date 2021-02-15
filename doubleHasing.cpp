#include <bits/stdc++.h>
using namespace std;
class DoulubleHash
{
    int *hashTable;
    int currSize;
    int size;
    int prime;

public:
    DoulubleHash(int sizee, int primee)
    {
        size = sizee;
        prime = primee;
        hashTable = new int[size];
        for (int i = 0; i < size; i++)
        {
            hashTable[i] = -1;
        }
        currSize = 0;
    }
    bool isFull()
    {
        return (currSize == size);
    }
    int hash1(int key)
    {
        return (key % size);
    }
    int hash2(int key)
    {
        return (prime - (key % prime));
    }
    void insertItem(int key)
    {
        int index1 = hash1(key);
        if (hashTable[index1] != -1)
        {
            int index2 = hash2(key);
            int i = 1;
            while (1)
            {
                int newIndex = (index1 + i * index2) % size;
                if (hashTable[newIndex] == -1)
                {
                    hashTable[newIndex] = key;
                    break;
                }
                i++;
            }
        }
        else
        {
            hashTable[index1] = key;
        }
        currSize++;
    }
    void searchItem(int key)
    {
        int index1 = hash1(key);
        int index2 = hash2(key);
        int i = 0;
        while (hashTable[(index1 + i * index2) % size] != key)
        {
            if (hashTable[(index1 + i * index2) % size] == -1)
            {
                cout << "Elment not found" << endl;
                return;
            }
            i++;
        }
        cout << "Element found" << endl;
    }
    void displayTable()
    {
        for (int i = 0; i < size; i++)
        {
            if (hashTable[i] != -1)
            {
                cout << i << " --> " << hashTable[i] << endl;
            }
            else
            {
                cout << i << endl;
            }
        }
    }
};
int primeFactor(int size)
{
    int first = 1;
    for (int i = size - 1; i > 0; i--)
    {
        int temp = 0;
        for (int j = 2; j < (i / 2) + 1; j++)
        {
            if (i % j == 0)
            {
                temp = 1;
                break;
            }
        }
        if (temp == 0)
        {
            return i;
        }
    }
    return 1;
}
int main()
{
    int size, prime, value, how_many;
    cout << "Enter the size of the table --> ";
    cin >> size;
    prime = primeFactor(size);
    DoulubleHash h(size, prime);
    cout << "How many value to insert --> ";
    cin >> how_many;
    for (int i = 0; i < how_many; i++)
    {
        cin >> value;
        h.insertItem(value);
    }
    cout << "Search the key --> ";
    cin >> value;
    h.searchItem(value);
    cout << "Search the key --> ";
    cin >> value;
    h.searchItem(value);
    h.displayTable();
    return 0;
}