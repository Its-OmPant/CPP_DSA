/**
 * 9. Define a class StaticCount and create a static variable. Increment this variable in a
   function and call this 3 times and display the result.
 */

#include <iostream>
using namespace std;

class StaticCount
{
public:
    static int count;

    void increment()
    {
        count++;
    }
};

int StaticCount::count = 0;

int main()
{
    StaticCount c;

    cout << "Initial Count Value: " << c.count << endl;
    c.increment();
    c.increment();
    c.increment();

    cout << "Count after three increment: " << c.count << endl;

    return 0;
}