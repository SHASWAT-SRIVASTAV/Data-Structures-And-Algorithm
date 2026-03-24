#include <stdio.h>

/*
    Program: nCr using Pascal's Triangle (Recursion)
    Description: Calculates nCr using recursive relation based on Pascal’s Triangle.

    Recurrence Relation:
    nCr(n, r) = nCr(n-1, r-1) + nCr(n-1, r)

    Base Case:
    nCr(n, 0) = 1
    nCr(n, n) = 1
*/

int pascal_ncr(int n, int r)
{
    // Base condition
    if(r == 0 || n == r)
    {
        return 1;
    }

    // Recursive relation
    return pascal_ncr(n - 1, r - 1) + pascal_ncr(n - 1, r);
}

int main()
{
    int n = 5;
    int r = 2;

    printf("nCr: %d\n", pascal_ncr(n, r));

    return 0;
}