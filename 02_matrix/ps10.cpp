/**
 * 10: Write a program to find the row with maximum number of 1s.
 */

#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int count = -1;

    for (int i = 0; i < 3; i++)
    {
        int inner_count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 1)
            {
                inner_count++;
            }
        }
        if (inner_count != 0 && inner_count > count)
        {
            count = i;
        }
    }
    cout << "Rows with Maximum 1's is: " << count << endl;
    return 0;
}