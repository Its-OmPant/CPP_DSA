/**
 * 9.  Write a program to sort a string array in ascending order.
 */

#include <iostream>
using namespace std;

void sort(string names[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int shortestIdx = i;
        for (int j = i + 1; j < size; j++)
        {
            int res = names[j].compare(names[shortestIdx]);

            // string j equal or smaller
            if (res <= 0)
            {
                shortestIdx = j;
            }
        }

        string temp = names[i];
        names[i] = names[shortestIdx];
        names[shortestIdx] = temp;
    }
}

int main()
{
    string names[10] = {"Ajay", "Sonal", "Rahul", "Gargi", "Pawan", "Om", "Aakash", "Jamuna", "Yash", "Diksha"};
    int size = 10;

    cout << "Array before Sorting: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << names[i] << " ";
    }
    cout << endl;

    sort(names, size);

    cout << "Array after Sorting: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}