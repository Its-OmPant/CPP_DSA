/**
 * 3.  Write a program to count vowels in a given string.
 */

#include <iostream>
#include <unordered_set>
using namespace std;

int count_vowels(const string &input)
{
    static const unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int vowel_count = 0;

    for (char c : input)
    {
        if (vowels.count(c))
            ++vowel_count;
    }

    return vowel_count;
}

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Vowel Count in \"" << input << "\" is : " << count_vowels(input) << endl;
    return 0;
}