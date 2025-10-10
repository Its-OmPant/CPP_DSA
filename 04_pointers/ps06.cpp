/**
 * 6. Write a program to count the number of vowels and consonants in a string using a pointer.
 */

#include <iostream>
#include <set>
using namespace std;

string count_vowels_and_consonents(string &s)
{
    int vowels_count = 0, consonent_count = 0;
    int length = s.size();
    set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    set<char> consonents = {'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z', 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};

    for (int i = 0; i < length; i++)
    {
        if (vowels.count(s[i]))
        {
            vowels_count++;
        }
        if (consonents.count(s[i]))
        {
            consonent_count++;
        }
    }

    string res = "Vowels: " + to_string(vowels_count) + " Consonents: " + to_string(consonent_count);
    return res;
}

int main()
{
    string name;

    cout << "Enter a string: ";
    getline(cin, name);

    string res = count_vowels_and_consonents(name);
    cout << res << endl;
    return 0;
}