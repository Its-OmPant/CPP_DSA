/**
 * 6. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
 */

#include <iostream>
using namespace std;

class Cube
{
public:
    int side;

    Cube(int s = 0)
    {
        side = s;
    }

    int getVolume()
    {
        return side * side * side;
    }
};

int main()
{
    Cube c1(3), c2(4);

    cout << "Volume of Cube having side of " << c1.side << " is: " << c1.getVolume() << endl;
    cout << "Volume of Cube having side of " << c2.side << " is: " << c2.getVolume() << endl;
    return 0;
}