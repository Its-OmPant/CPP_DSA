/**
 * 27. Create a class Marks that have one member variable marks and one member function
    that will print marks. We know that we can access member functions using (.) dot operator. Now
    you need to overload (->) arrow operator to access that function.
 */

#include <iostream>
using namespace std;

class Marks
{
public:
    int marks;

    Marks(int m = 0)
    {
        marks = m;
    }
    void printMarks()
    {
        cout << "Marks: " << marks << endl;
    }

    Marks *operator->()
    {
        return this;
    }
};

int main()
{
    Marks m1(58);
    m1->printMarks();
    return 0;
}