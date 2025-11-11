/**
 * 26. Create a Distance class having 2 instance variable feet and inches. Also create default constructor and parameterized constructor takes 2 variables . Now overload () function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and inches = a+b + 15.
 */

#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inches;

    Distance(int feet = 0, int inches = 0)
    {
        this->feet = feet;
        this->inches = inches;
    }

    friend ostream &operator<<(ostream &os, Distance &d)
    {
        cout << d.feet << " feet " << d.inches << " inches ";
        return os;
    }

    void operator()(int a, int b, int c)
    {
        this->feet = a + c + 5;
        this->inches = a + b + 15;
    }
};
int main()
{
    Distance d1(8, 4), d2(7, 9);

    cout << d1 << endl
         << d2 << endl;

    // calling the function call operator
    d1(3, 4, 5);

    cout << d1 << endl;

    return 0;
}