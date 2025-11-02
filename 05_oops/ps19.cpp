// Question 19: Refer Readme

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

    // + operator overloading
    Matrix operator+(const Matrix &m2)
    {
        Matrix temp;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.a[i][j] = this->a[i][j] + m2.a[i][j];
            }
        }

        return temp;
    }
};

int main()
{
    Matrix m1, m2, m3;

    cin >> m1 >> m2;

    cout << "Matrix 1: " << endl;
    m1.print();

    cout << "Matrix 2: " << endl;
    m2.print();

    m3 = m1 + m2;
    cout << "Matrix sum m1 + m2 is: " << endl;
    m3.print();

    return 0;
}