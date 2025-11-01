/**
 * 13. Create a class Time which contains: Hours, Minutes, Seconds. Write a C++ program using operator overloading for the following:

-   (==) : To check whether two Times are the same or not.
-   (>>) To accept the time.
-   (<<) : To display the time.
 */

#include <iostream>
using namespace std;

class Time
{
public:
    int hours, minutes, seconds;

    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    friend bool operator==(const Time &t1, const Time &t2);

    friend ostream &operator<<(const ostream &os, const Time &t);

    friend istream &operator>>(const istream &is, Time &t);
};

bool operator==(const Time &t1, const Time &t2)
{
    if (t1.hours == t2.hours && t1.minutes == t2.minutes && t1.seconds == t2.seconds)
        return true;
    else
        return false;
}

ostream &operator<<(const ostream &os, const Time &t)
{
    cout << "Hours: " << t.hours << endl;
    cout << "Minutes: " << t.minutes << endl;
    cout << "Seconds: " << t.seconds << endl;
}

istream &operator>>(const istream &is, Time &t)
{
    cout << "Enter Hours: ";
    cin >> t.hours;
    cout << endl;
    cout << "Enter Minutes: ";
    cin >> t.minutes;
    cout << endl;
    cout << "Enter Seconds: ";
    cin >> t.seconds;
    cout << endl;
}

int main()
{
    Time t1, t2;

    cout << "Enter First Time " << endl;
    cout << "-------------------------" << endl;
    cin >> t1;

    cout << "First Time" << endl;
    cout << t1;

    cout << "Enter Second Time " << endl;
    cout << "-------------------------" << endl;
    cin >> t2;

    cout << "Second Time" << endl;
    cout << t1;

    if (t1 == t2)
    {
        cout << "Times are Same" << endl;
    }
    else
    {
        cout << "Times are different" << endl;
    }

    return 0;
}