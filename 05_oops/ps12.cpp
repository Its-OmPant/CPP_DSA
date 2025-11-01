/**
 * 12. Write a C++ program to add two complex numbers using operator overloaded by a friend function.
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

    friend Complex operator+(const Complex &c1, const Complex &c2);

    void display()
    {
        cout << real;
        if (imaginary >= 0)
        {
            cout << "+";
        }
        cout << imaginary << "i" << endl;
    }
};

Complex operator+(const Complex &c1, const Complex &c2)
{
    return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}

int main()
{
    Complex c1(3, 2), c2(4, 3);

    Complex c3 = c1 + c2;
    c1.display();
    c2.display();
    cout << "Sum of c1 + c2 is: ";
    c3.display();

    return 0;
}