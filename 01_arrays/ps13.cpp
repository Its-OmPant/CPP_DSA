/**
 *  13: Write a function to count a total number of duplicate elements in an array.(Means elements that occurs 2 times in an array).
 */

#include <iostream>
#include <map>
using namespace std;

int print_unique_elements(int *array, int size)
{
    map<int, int> hash;
    int duplicate_count = 0;

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
        if (pair.second > 1)
        {
            duplicate_count++;
        }
    }
    return duplicate_count;
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
    int dup_count = print_unique_elements(array, size);
    cout << "Duplicate Elements Count in array: " << dup_count << endl;

    return 0;
}