/**
 * Consider the following class mystring
 *  Class mystring
    {
    char str [100];
    Public:
    // methods
    };
 * Overload operator “!” to reverse the case of each alphabet in the string (Uppercase to Lowercase and vice versa).
 */

#include <iostream>
#include <cstring>
using namespace std;

class Mystring
{
    char str[100];

public:
    Mystring(const char *s)
    {
        strcpy(str, s);
    }

    void print()
    {
        cout << str << endl;
    }

    void operator!()
    {
        int length = strlen(this->str);

        for (int i = 0; i < length; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
            }
        }
    }
};

int main()
{

    Mystring s = "Hello World";

    s.print();

    !s;
    s.print();

    return 0;
}