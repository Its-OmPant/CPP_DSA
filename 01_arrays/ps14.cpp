/**
 * 14: Write a function to print all unique elements in an array.
 */

#include <iostream>
#include <map>
using namespace std;

void print_unique_elements(int *array, int size)
{
    map<int, int> hash;

    for (int i = 0; i < size; i++)
    {
        if (hash.count(array[i]))
        {
            hash[array[i]] = hash[array[i]] + 1;
        }
        else
        {
            hash[array[i]] = 1;
        }
    }
    for (const auto &pair : hash)
    {
        if (pair.second == 1)
        {
            cout << pair.first << " ";
        }
    }
}

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int array[size];

    cout << "Enter " << size << " elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Unique Elements in array are: ";
    print_unique_elements(array, size);
    cout << endl;

    return 0;
}