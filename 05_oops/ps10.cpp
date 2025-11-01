/**
 * 10. Define a class Complex with appropriate instance variables and member functions.
    Define following operators in the class:

    1. (+)
    2. (-)
    3. (\*)
    4. (==)
 */

#include <iostream>
using namespace std;

class Complex
{
public:
    double real, imaginary;

    Complex(double r = 0, double i = 0)
    {
        real = r;
        imaginary = i;
    }

    void set(double r, double i)
    {
        real = r;
        imaginary = i;
    }

    void display()
    {
        cout << real;
        if (imaginary >= 0)
        {
            cout << "+";
        }
        cout << imaginary << "i" << endl;
    }

    Complex operator+(Complex c)
    {
        return Complex(real + c.real, imaginary + c.imaginary);
    }

    Complex operator-(Complex c)
    {
        return Complex(real - c.real, imaginary - c.imaginary);
    }

    Complex operator*(Complex c)
    {
        return Complex(real * c.real, imaginary * c.imaginary);
    }

    bool operator==(Complex c)
    {
        if (real == c.real && imaginary == c.imaginary)
            return true;
        else
            return false;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.set(3, -9);
    c1.display();
    c2.set(5, 8);
    c2.display();

    // // + overloading
    // c3 = c1 + c2;

    // // - overloading
    // c3 = c1 - c2;

    // // * overloading
    c3 = c1 * c2;

    c3.display();

    cout << "c3 == c3 :"
         << ((c3 == c3) == 1 ? "true" : "false") << endl;

    cout << "c1 == c2 :"
         << ((c1 == c2) == 1 ? "true" : "false") << endl;

    return 0;
}