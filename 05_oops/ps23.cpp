/**
 * 23. Create a complex class and overload assignment operator for that class.
 */

#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imaginary;

public:
    Complex(int real = 0, int imaginary = 0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    friend ostream &operator<<(ostream &os, Complex &c)
    {
        if (c.imaginary < 0)
        {
            cout << c.real << "-" << c.imaginary * -1 << "i";
        }
        else
        {
            cout << c.real << "+" << c.imaginary << "i";
        }
        return os;
    }

    Complex &operator=(const Complex &c)
    {
        if (this == &c)
        {
            return *this;
        }

        this->real = c.real;
        this->imaginary = c.imaginary;
        return *this;
    }
};

int main()
{
    Complex c1(2, -3), c2;

    cout << "C1: " << c1 << endl;
    cout << "C2: " << c2 << endl;

    c2 = c1;

    cout << "C2: " << c2 << endl;

    return 0;
}