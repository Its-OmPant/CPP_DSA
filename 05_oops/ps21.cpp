/**
 * 21. Overload subscript operator [] that will be useful when we want to check for an index out of bound.
 */

#include <iostream>
using namespace std;

class CustomArray
{
    int *array;

public:
    int size;
    int length;
    CustomArray(int size = 100)
    {
        array = new int[size];
        this->size = size;
        this->length = 0;
    }

    void fill(int value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->array[i] = value;
            ++length;
        }
    }

    friend ostream &operator<<(ostream &os, CustomArray &carr)
    {
        cout << "[";
        for (int i = 0; i < carr.length; i++)
        {
            cout << carr.array[i];

            if (i != carr.length - 1)
            {
                cout << ", ";
            }
        }
        cout << "]";
        return os;
    }

    int operator[](int index)
    {
        if (index >= this->size)
        {
            throw "Error: Array Index Out Of Bound ";
        }
        else
        {
            return array[index];
        }
    }
};

int main()
{
    CustomArray c = CustomArray(10);

    cout << c << endl;

    c.fill(4);
    cout << "Array: " << c << endl;

    try
    {
        cout << "Value at index 2: " << c[200] << endl;
    }
    catch (const char *e)
    {
        cerr << e << '\n';
    }

    return 0;
}