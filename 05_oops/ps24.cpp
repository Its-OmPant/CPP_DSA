/**
 * 24. Create a Coordinate class for 3 variables x,y and z and overload comma operator such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and c3 are objects of 3D coordinate class.
 */

#include <iostream>
using namespace std;

class ThreeD
{
public:
    int x, y, z;

    ThreeD(int x = 0, int y = 0, int z = 0)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    friend ostream &operator<<(ostream &os, ThreeD &t)
    {
        cout << "(" << t.x << ", " << t.y << ", " << t.z << ")";
        return os;
    }

    friend ThreeD operator,(const ThreeD &obj1, const ThreeD &obj2)
    {
        // cout << "Custom Comma Operator Called" << endl;s
        return obj2;
    }
};

int main()
{
    ThreeD c1(4, -5, 8), c2(9, 32, 4), c3;

    cout << "Coordinate 1: " << c1 << endl;
    cout << "Coordinate 2: " << c2 << endl;
    cout << "Coordinate 3: " << c3 << endl;

    c3 = (c2, c1);

    cout << "Coordinate 3: " << c3 << endl;

    return 0;
}