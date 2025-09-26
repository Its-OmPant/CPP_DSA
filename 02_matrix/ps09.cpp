/**
 * 09: Write a program to determine whether a matrix is a sparse matrix.
 */

#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {
        {1, 0, 3},
        {0, 0, 6},
        {0, 8, 0}};

    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (count >= 5)
    {
        cout << "Matrix is a sparse matrix";
    }
    else
        cout << "Matrix is a dense matrix";
    return 0;
}