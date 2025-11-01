/**
 * 14. Consider following class Numbers
    class Numbers
    {
    int x,y,z;
    public:
    // methods
    };
    Overload the operator unary minus (-) to negate the numbers.
 */

#include <iostream>
using namespace std;

class Numbers
{
    int x, y, z;

public:
    Numbers(int a = 0, int b = 0, int c = 0)
    {
        x = a;
        y = b;
        z = c;
    }

    void display()
    {
        cout << "X: " << x << " Y: " << y << " Z: " << z << endl;
    }

    void operator-()
    {
        x *= -1;
        y *= -1;
        z *= -1;
    }
};

int main()
{
    Numbers n = Numbers(2, -3, 5);

    n.display();

    -n;

    n.display();

    return 0;
}