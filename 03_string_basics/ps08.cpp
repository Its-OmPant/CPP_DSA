/**
 * 8.  Write a program to copy one string to another string.
 */

#include <iostream>
using namespace std;

string copy(const string &input)
{
    string copy(input.size(), '\0');

    for (char c : input)
    {
        copy += c;
    }
    return copy;
}

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Copy String: " << copy(input) << endl;

    return 0;
}