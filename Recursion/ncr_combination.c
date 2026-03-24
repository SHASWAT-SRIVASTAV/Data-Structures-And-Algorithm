#include <stdio.h>

/*
    Program: nCr (Combination) using Recursion
    Description: Calculates nCr using factorial formula.

    Formula:
    nCr = n! / (r! * (n - r)!)

    Note:
    Factorial is implemented using recursion.
*/

int fact(int n)
{
    // Base condition
    if(n == 0)
    {
        return 1;
    }

    // Recursive relation
    return n * fact(n - 1);
}

int ncr(int n, int r)
{
    int t1 = fact(n);
    int t2 = fact(r);
    int t3 = fact(n - r);

    return t1 / (t2 * t3);
}

int main()
{
    int n = 5;
    int r = 2;

    printf("nCr: %d\n", ncr(n, r));

    return 0;
}