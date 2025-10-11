/**
 * 3. Define a class Factorial and define an instance member function to find the Factorial of a number using class.
 */

#include <iostream>
using namespace std;

long long int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;

    return (long long)n * factorial(n - 1);
}

class Factorial
{
public:
    int num;

    Factorial(int n)
    {
        if (n < 0)
        {
            n = 0;
        }
        num = n;
    }

    long long getFactorial()
    {
        return factorial(num);
    }
};

int main()
{
    Factorial f = Factorial(19);

    cout << "Factorial of " << f.num << " is: " << f.getFactorial() << endl;
    return 0;
}