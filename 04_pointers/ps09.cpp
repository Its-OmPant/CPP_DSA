/**
 * 9. Write a program to print a string in reverse using a pointer.
 */

#include <iostream>
using namespace std;

void print_reversed(char *name, int length)
{
    int i = length - 2; // considering the \0 char as well
    while (i >= 0)
    {
        cout << name[i];
        i--;
    }
    cout << endl;
}

int main()
{
    char name[] = {'o', 'm', ' ', 'p', 'a', 'n', 't', '\0'};

    print_reversed(name, 8);
    return 0;
}