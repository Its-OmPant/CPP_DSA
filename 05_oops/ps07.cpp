/**
 * 7. Define a class Date and write a program to Display Date and initialise date object using
   Constructors.
 */

#include <iostream>
using namespace std;

class Date
{
public:
    int day, month, year;

    Date(int d = 0, int m = 0, int y = 2000)
    {
        day = d;
        month = m;
        year = y;
    }

    void display()
    {
        cout << "Date: " << day << "-" << month << "-" << year << " (dd-mm-yyyy)" << endl;
    }
};

int main()
{
    Date d = Date(12, 7, 2023);

    d.display();
    return 0;
}