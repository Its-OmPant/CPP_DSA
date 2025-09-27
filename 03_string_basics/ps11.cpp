/**
 * 11. Write a function to compare two strings.
 */

#include <iostream>
using namespace std;

int compare(const string &input1, const string &input2)
{
    int input1_length = input1.length();
    int input2_length = input2.length();

    int iter_count = input1_length >= input2_length ? input1_length : input2_length;

    for (int i = 0; i < iter_count; i++)
    {
        if (input1[i] > input2[i])
        {
            return 1;
        }
        else if (input1[i] < input2[i])
        {
            return -1;
        }
        else
        {
            continue;
        }
    }

    return 0;
}

int main()
{
    string input1, input2;

    cout << "Enter two strings to compare (seperate by space): ";
    cin >> input1 >> input2;

    int res = compare(input1, input2);

    if (res == 1)
    {
        cout << input1 << " is greater than " << input2 << endl;
    }
    else if (res == -1)
    {
        cout << input1 << " is smaller than " << input2 << endl;
    }
    else
    {
        cout << "Both strings are equal" << endl;
    }

    return 0;
}
