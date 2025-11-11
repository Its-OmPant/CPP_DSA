/**
 * 25. Create an Integer class that contains int x as an instance variable and overload casting int() operator that will type cast your Integer class object to int data type.
 */

#include <iostream>
using namespace std;

class Integer
{
    int num;

public:
    Integer(int n = 0)
    {
        num = n;
    }

    friend ostream &operator<<(ostream &os, Integer &i)
    {
        cout << i.num;
        return os;
    }

    operator int() const
    {
        return this->num;
    }
};

int main()
{
    Integer x = Integer();
    Integer y = Integer(15);

    cout << x << " " << y << endl;

    int n = int(y);
    cout << n;
    return 0;
}