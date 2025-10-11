/**
 * 5. Define a class Time to represent a time with instance variables h,m and s to store hour,
   minute and second. Also define following member functions
   a. void setTime(int,int,int)
   b. void showTime()
   c. Time add(Time)
 */

#include <iostream>
using namespace std;

class Time
{
    int d;

public:
    int h, m, s;

    Time()
    {
        d = 0;
        h = 0;
        m = 0;
        s = 0;
    }

    void setTime(int hs, int mm, int sec)
    {
        h = hs;
        m = mm;
        s = sec;
    }

    void showTime()
    {
        if (d > 0)
        {
            cout << "Time: " << d << ":" << h << ":" << m << ":" << s << " " << endl;
        }
        else
        {
            cout << "Time: " << h << ":" << m << ":" << s << " " << endl;
        }
    }

    Time add(Time t)
    {
        Time temp = Time();
        if (((h + t.h) + ((m + t.m) / 60)) >= 24)
        {
            temp.d = ((h + t.h) + ((m + t.m) / 60)) / 24;
        }
        temp.h = ((h + t.h) + ((m + t.m) / 60)) % 24;
        temp.m = ((m + t.m) + (s + t.s) / 60) % 60;
        temp.s = (s + t.s) % 60;
        return temp;
    }
};

int main()
{
    Time t1, t2, t3;

    t1.setTime(12, 40, 34);
    t2.setTime(12, 25, 36);

    t1.showTime();
    t2.showTime();

    t3 = t1.add(t2);

    t3.showTime();

    return 0;
}