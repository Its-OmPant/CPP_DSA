/**
 * 2.  Write a program to count the occurrence of a given character in a given string.
 */

#include <iostream>
#include <map>
using namespace std;

int find_frequency(const string &input, char query)
{
    map<char, int> hash;
    int length = input.length();
    for (int i = 0; i < length; i++)
    {
        if (hash.count(input[i]))
        {
            hash[input[i]]++;
        }
        else
        {
            hash[input[i]] = 1;
        }
    }

    return hash[query];
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    char query;
    cout << "Enter character to find frequency: ";
    cin >> query;

    cout << "Char: " << query << " appeared " << find_frequency(input, query) << " time in string: " << input << endl;
    return 0;
}