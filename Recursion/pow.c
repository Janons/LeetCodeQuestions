#include <stdio.h>
#include <stdlib.h>

// prototype
double myPow(double x, int n);
int fibonacci(int n);

int main()
{
    double x, result;
    int n, i;

    n = 10;
    x = 2;

    result = myPow(x, n);

    fprintf(stdout, "The result is ->%f ", result);
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
    int p;
    // backtracking part
    if (p > n)
        return x;
    
    else{
        p++;
    }

    return myPow(x, n) * myPow(x, n);
}
