/**
 * 7.  Write a program to count the total number of alphabets, digits and special characters in a string.
 */

#include <iostream>
#include <unordered_set>
using namespace std;

void print_char_counts(const string &input)
{
    int alpha_count = 0;
    int digit_count = 0;
    int special_count = 0;

    unordered_set<char> aphabets = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    unordered_set<char> digits = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    unordered_set<char> specials = {'!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ';', ':', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~'};

    for (char c : input)
    {
        if (aphabets.count(c))
            alpha_count++;
        else if (digits.count(c))
            digit_count++;
        else if (specials.count(c))
            special_count++;
    }

    cout << "Alphabets: " << alpha_count << endl;
    cout << "Digits: " << digit_count << endl;
    cout << "Special Characters: " << special_count << endl;
}

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    print_char_counts(input);

    return 0;
}