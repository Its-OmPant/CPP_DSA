/**
 * 16: Write a function to count the frequency of each element of an array.
 */

#include <iostream>
#include <map>
using namespace std;

int print_frequencies(int *array, int size)
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
        cout << pair.first << " : " << pair.second << endl;
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

    cout << "Element Frequencies: " << endl;
    cout << "Element : Frequency" << endl;
    print_frequencies(array, size);
    cout << endl;

    return 0;
}