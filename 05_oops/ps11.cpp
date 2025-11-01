/**
 * 11. Write a C++ program to overload unary operators that is increment and decrement.
 */

#include <iostream>
using namespace std;

class CustomNum
{
public:
    int number;

    CustomNum(int n)
    {
        number = n;
    }

    // prefix increment
    int operator++()
    {
        return ++number;
    }

    // prefix decrement
    int operator--()
    {
        return ++number;
    }

    // postfix increment
    int operator++(int)
    {
        return number++;
    }

    // postfix decrement
    int operator--(int)
    {
        return number--;
    }
};

int main()
{
    CustomNum c(3);

    cout << c++;
    cout << c++;
    cout << c++;

    return 0;
}