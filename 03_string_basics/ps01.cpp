/**
 * 1.  Write a program to calculate the length of the string. (without using builtin method)
 */

#include <iostream>
using namespace std;

int main()
{
    string some_input;
    cout << "Enter a string: ";
    getline(cin, some_input);

    int i = 0, length = 0;
    while (some_input[i] != '\0')
    {
        length++;
        i++;
    }

    cout << "Length of String is :" << length << endl;
    return 0;
}