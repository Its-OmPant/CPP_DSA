/**
 * 20. Define a class Complex with appropriate instance variables and member functions.
    Overload following operators
    a. << insertion operator
    b. >> extraction operator.
 */

#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }

    friend ostream &operator<<(ostream &os, Complex &c)
    {
        if (c.imaginary >= 0)
        {
            cout << c.real << " + " << c.imaginary << "i";
        }
        else
        {
            cout << c.real << " - " << c.imaginary * -1 << "i";
        }
    }

    friend istream &operator>>(istream &is, Complex &c)
    {
        cout << "Real part: ";
        cin >> c.real;
        cout << "Imaginary Part: ";
        cin >> c.imaginary;
        return cin;
    }
};

int main()
{
    Complex c1(3, 4), c2;

    cout << c1 << endl
         << c2 << endl;

    cout << "Enter a complex number :" << endl;

    cin >> c2;

    cout << c2 << endl;

    return 0;
}