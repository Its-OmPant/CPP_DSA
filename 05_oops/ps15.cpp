/**
 * 15. Create a class CString to represent a string. Overload the
    -   (+) operator to concatenate two strings.
    -   == to compare 2 strings.
 */

#include <iostream>
#include <cstring>
using namespace std;

class CString
{
    char *s;

public:
    CString(const char *str)
    {
        s = new char[strlen(str) + 1];
        strcpy(s, str);
    }

    void print()
    {
        cout << s << endl;
    }

    CString &operator+(const char *str)
    {
        char *temp = new char[strlen(s) + strlen(str) + 1];
        strcpy(temp, s);
        strcat(temp, str);
        delete s;
        s = temp;
        return *this;
    }

    CString &operator+(CString &s2)
    {
        char *temp = new char[strlen(s) + strlen(s2.s) + 1];
        strcpy(temp, s);
        strcat(temp, s2.s);
        delete s;
        s = temp;
        return *this;
    }

    bool operator==(CString &s2)
    {
        int res = strcmp(s, s2.s);
        return res == 0;
    }

    bool operator==(const char *str)
    {
        int res = strcmp(s, str);
        return res == 0;
    }

    ~CString()
    {
        delete[] s;
    }
};

int main()
{
    CString s = "hello";
    s.print();

    s + "abc";

    s.print();
    CString s1 = " World";
    CString s2 = " World";
    s + s1;

    s.print();
    // == operator
    cout << (s == s1) << endl;
    cout << (s1 == s2) << endl;
    cout << (s1 == "hello") << endl;
    cout << (s1 == " World") << endl;

    // multiple concatenation
    s + " hola " + " amigos ";
    s.print();
    return 0;
}