/**
 * 6.  Write a program to reverse a string.
 */

#include <iostream>
using namespace std;

string reverse(const string &input)
{
    string result(input.size(), '\0');
    int length = input.length();
    for (int i = length - 1; i >= 0; i--)
    {
        result += input[i];
    }
    return result;
}

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "reversed string : " << reverse(input) << endl;

    return 0;
}