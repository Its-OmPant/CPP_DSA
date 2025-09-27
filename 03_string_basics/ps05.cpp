/**
 * 4.  Write a program to convert a given string into lowercase.
 */

#include <iostream>
#include <ctime>
using namespace std;

string lowercase(const string &input)
{
    string result;
    result.reserve(input.size()); // reserve required space to avoid reallocations

    for (char ch : input)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            result += ch + 32;
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

    cout << "LowerCased :: " << lowercase(input) << endl;

    return 0;
}