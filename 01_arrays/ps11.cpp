/**
 * 11: Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
 */

//  32, 29, 40, 12, 70

#include <iostream>
using namespace std;

int rotate_array(int *array, int size, int times, int direction)
{
    if (size < 2)
    {
        cout << "Size must be greater than or equal to 2" << endl;
        return -1;
    }
    if (direction == -1)
    {
        // rotate left
        for (int i = 1; i <= times; i++)
        {
            int rotationElement = array[0];
            for (int j = 1; j < size; j++)
            {
                array[j - 1] = array[j];
            }
            array[size - 1] = rotationElement;
        }
        return 0;
    }
    else if (direction == 1)
    {
        for (int i = 1; i <= times; i++)
        {
            int rotationElement = array[size - 1];
            for (int j = size - 1; j >= 0; j--)
            {
                array[j] = array[j - 1];
            }
            array[0] = rotationElement;
        }
        return 0;
    }
    else
    {
        cout << "Error: Invalid Direction" << endl;
        return -1;
    }
}

int main()
{
    int size, times, direction;
    cout << "Enter array size: ";
    cin >> size;

    int array[size];

    cout << "Enter " << size << " Elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Enter No.of Times to rotate: ";
    cin >> times;

    cout << "Enter rotation direction/\nEnter -1 For Left\nEnter 1 For Right\n: ";
    cin >> direction;

    cout << "Array Before Rotation: [ ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << " ]" << endl;

    int statusCode = rotate_array(array, size, times, direction);
    if (statusCode == 0)
    {
        cout << "Array After Rotation: [ ";
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << " ]" << endl;
    }
    else
    {
        cout << "Rotation Failed..." << endl;
    }

    return 0;
}