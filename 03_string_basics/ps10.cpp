/**
 * 10. Write a program to Find the Frequency of Characters.
 */

#include <iostream>
#include <map>
using namespace std;

void print_char_frequencies(const string &input)
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
    cout << "Character Frequencies of string: " << input << endl;
    cout << "Character : Frequency" << endl;
    for (const auto &pair : hash)
    {
        cout << pair.first << " : " << pair.second << endl;
    }
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    print_char_frequencies(input);
    return 0;
}