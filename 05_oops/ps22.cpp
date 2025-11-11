/**
 * 22. Create a student class and overload new and delete operators as a member function of the class.
 */

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(const char *c, int age)
    {
        if (age <= 0)
        {
            throw "Invalid Age Error";
        }
        this->age = age;
        this->name = c;
    }

    friend ostream &operator<<(ostream &os, Student &s)
    {
        cout << "Student" << endl;
        cout << "-------" << endl;
        cout << "Name: " << s.name << ", Age: " << s.age;
        return os;
    }

    // new operator overloading
    void *operator new(size_t size)
    {
        void *p = malloc(size);
        return p;
    }

    // delete operator overloading
    void operator delete(void *p)
    {
        free(p);
    }
};

int main()
{

    Student *s1 = new Student("Ajay Singh", 11);
    cout << *s1 << endl;

    delete s1;

    s1 = nullptr;

    return 0;
}