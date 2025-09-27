/**
 * 4.  Write a program to convert a given string into uppercase.
 */

#include <iostream>
#include <ctime>
using namespace std;

string uppercase(const string &input)
{
    string result;
    result.reserve(input.size()); // reserve required space to avoid reallocations

    for (char ch : input)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            result += ch - 32;
        }
        else
        {
            result += ch;
        }
    }
    return result;
}

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "UpperCased :: " << uppercase(input) << endl;

    return 0;
}