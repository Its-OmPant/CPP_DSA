/**
 * 06: Write a program to find the sum of rows and columns of a Matrix.
 */

#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
    }
    cout << " SUm of Rows and Columns is: " << sum << endl;
    return 0;
}