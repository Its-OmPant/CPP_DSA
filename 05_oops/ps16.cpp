// Question 16: refer readme

#include <iostream>
using namespace std;

class Fraction
{
    long numerator, denominator;

public:
    Fraction(long n = 0, long d = 0)
    {
        numerator = n;
        denominator = d;
    }

    // pre increment
    Fraction &operator++()
    {
        ++this->numerator;
        ++this->denominator;
        return *this;
    }

    // post increment
    Fraction operator++(int)
    {
        Fraction temp = *this;
        ++*this;
        return temp;
    }

    // insertion operator overloading
    friend ostream &operator<<(ostream &os, Fraction &f)
    {
        cout << f.numerator << "/" << f.denominator;
        return os;
    }

    // extraction operator overloading
    friend istream &operator>>(istream &is, Fraction &f)
    {
        cout << "Numerator: ";
        cin >> f.numerator;
        cout << "Denominator: ";
        cin >> f.denominator;
    }
};

int main()
{
    Fraction f1, f2;

    cout << "f1: " << f1 << endl;
    cout << "f2: " << f2 << endl;

    cout << "Enter 1st Fraction Value" << endl;
    cin >> f1;

    cout << "f1: " << f1 << endl;
    cout << "++f1: " << ++f1 << endl;

    cout << "f2 = f1++" << endl;
    f2 = f1++;
    cout << "f1: " << f1 << endl;
    cout << "f2: " << f2 << endl;

    return 0;
}