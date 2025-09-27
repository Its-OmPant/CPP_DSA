/**
 * 12. Write a function to check whether a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit).
 */

#include <iostream>
#include <unordered_set>
#include <cctype>
using namespace std;

bool is_alpha_numeric(const string &input)
{
    bool alpha = false, numeric = false;

    for (char c : input)
    {
        if (alpha && numeric)
            return true;

        if (isalpha(static_cast<unsigned char>(c)))
            alpha = true;

        if (isdigit(static_cast<unsigned char>(c)))
            numeric = true;
    }

    return alpha && numeric;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    bool result = is_alpha_numeric(s);

    if (result)
    {
        cout << "String is alpha numeric" << endl;
    }
    else
    {
        cout << "String is not an alpha numeric string" << endl;
    }
    return 0;
}