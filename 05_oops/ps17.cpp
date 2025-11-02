// Question 17: Refer Readme

#include <iostream>
using namespace std;

class Matrix
{
    int a[3][3];
    int rows = 3;
    int cols = 3;

public:
    Matrix()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = 0;
            }
        }
    }

    void printDimension()
    {
        cout << rows << " x " << cols << endl;
    }

    void print()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    // unary negation overloading
    void operator-()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] *= -1;
            }
            cout << endl;
        }
    }

    // input operator overloading
    friend istream &operator>>(istream &is, Matrix &m)
    {
        cout << "Enter Matrix Element: (" << m.rows << " X " << m.cols << ") :" << endl;

        for (int i = 0; i < m.rows; i++)
        {
            for (int j = 0; j < m.cols; j++)
            {
                cin >> m.a[i][j];
            }
        }
    }
};

int main()
{
    Matrix m;

    m.printDimension();
    m.print();

    cin >> m;

    cout << "Entered Matrix: " << endl;
    m.print();

    -m;

    cout << "Matrix after negation is: " << endl;
    m.print();

    return 0;
}