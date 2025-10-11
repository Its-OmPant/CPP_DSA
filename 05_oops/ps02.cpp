/**
 * 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.
 */

#include <iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    Time(int h = 0, int m = 0, int s = 0)
    {
        if (h < 0 || h > 60)
        {
            h = 0;
        }
        if (m < 0 || m > 60)
        {
            m = 0;
        }
        if (s < 0 || s > 60)
        {
            s = 0;
        }
        hour = h;
        minute = m;
        second = s;
    }

    void print()
    {
        cout << hour << "hr " << minute << "mm " << second << "ss " << endl;
    }
};
int main()
{
    Time t = Time(3, 4, 58);
    Time t2;

    t.print();
    t2.print();

    return 0;
}