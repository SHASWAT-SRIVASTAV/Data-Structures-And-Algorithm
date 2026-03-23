#include <stdio.h>

/*
    Program: Power Function using Recursion
    Description: Calculates m raised to the power n using recursion.

    Recurrence Relation:
    power(m, n) = power(m, n - 1) * m

    Base Case:
    power(m, 0) = 1
*/

int power(int m, int n)
{
    // Base condition
    if(n == 0)
    {
        return 1;
    }

    // Recursive relation
    return power(m, n - 1) * m;
}

int main()
{
    int x = 2;
    int y = 9;

    printf("Result: %d\n", power(x, y));

    return 0;
}