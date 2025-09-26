/**
 * 09: Write a function to find the greatest number from the given array of any size.
 */

#include <iostream>
using namespace std;

int find_greatest(int arr[], int size)
{
    int greatest = -1; // considering a positive element array
    for (int i = 0; i < size; i++)
    {

        if (arr[i] > greatest)
        {
            greatest = arr[i];
        }
    }
    return greatest;
}

int main()
{
    int n;

    cout << "Enter Size of Array: ";
    cin >> n;

    int array[n];
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int greatest = find_greatest(array, n);
    cout << "Greatest Element of Array is: " << greatest << endl;
    return 0;
}