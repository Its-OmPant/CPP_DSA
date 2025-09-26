/**
 * 12: Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
 */

#include <iostream>
using namespace std;

int get_first_adjacent_duplicate(int *array, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (array[i] == array[i + 1])
		{
			return array[i];
		}
	}

	return -1; // considering a +ve array
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

	int duplicate = get_first_adjacent_duplicate(array, size);

	if (duplicate == -1)
		cout << "No Adjacent Duplicates found..." << endl;
	else
		cout << "First Adjacent duplicate element is: " << duplicate << endl;

	return 0;
}