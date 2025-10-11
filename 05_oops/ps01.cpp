/**
 * 1. Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and print values of complex number.
 */

#include <iostream>
using namespace std;

class Complex
{
    double real, imaginary;

public:
    Complex(double r = 0, double i = 0)
    {
        real = r;
        imaginary = i;
    }

    void print()
    {
        cout << real;
        if (imaginary >= 0)
        {
            cout << "+";
        }
        cout << imaginary << "i ";
    }
};

int main()
{
    Complex c(4.5, 7);

    c.print();
    return 0;
}