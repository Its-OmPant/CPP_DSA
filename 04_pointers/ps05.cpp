/**
 * 5. Write a program to calculate the length of the string using a pointer.
 */

#include <iostream>
using namespace std;

int len(char *str)
{
    int i = 0, length = 0;
    while (str[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

int main()
{
    char string[] = {'a', 's', 't', 'r', 'i', 'n', 'g', '\0'};

    cout << "Length of string is: " << len(string) << endl;
    return 0;
}