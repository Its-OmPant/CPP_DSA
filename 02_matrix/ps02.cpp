/**
 * 02: Write a program to calculate the product of two matrices each of order 3x3.
 */

#include <iostream>
using namespace std;

int main()
{
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int matrix2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int result[3][3];

    // simple matrix multiplication implementation
    // uses o(n^3) TC
    // better version is strassens Matrix Multiplication Algo based on D&C Technique.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < 3; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Matrix Multiplication result is: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}