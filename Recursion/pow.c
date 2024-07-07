#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// prototype
double myPow(double x, int n);

int fibonacci(int n);

int main()

{
    return 0;
}
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
double myPow(double x, int n)
{
    bool isNeg;
    double result;

    isNeg = (n < 0) ? true : false;

    if (n == 0)
    {
        return 1.0;
    }

    int half = n / 2; // integer division
    int r = n - (half * 2);

    result = myPow(x, half);
    result *= result;

    result = (r == 1) ? result * x : result;

    if (isNeg)
    {
        return 1 / result;
    }

    return result;
}
