/**
 * 4. Define a class Complex to represent a complex number with instance variables a and b
   to store real and imaginary parts. Also define following member functions
   a. void setData(int,int)
   b. void showData()
   c. Complex add(Complex)
 */

#include <iostream>
using namespace std;

class Complex
{

public:
    int real, imaginary;

    Complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }
    void setData(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    void showData()
    {
        cout << real;
        if (imaginary >= 0)
        {
            cout << "+";
        }
        cout << imaginary << "i " << endl;
    }

    Complex add(Complex c)
    {
        Complex res;

        res.setData(real + c.real, imaginary + c.imaginary);
        return res;
    }
};

int main()
{
    Complex c1, c2;

    c1.showData();

    c1.setData(4, 5);
    c2.setData(3, 4);

    Complex c3 = c1.add(c2);

    c3.showData();

    return 0;
}