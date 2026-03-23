#include <stdio.h>

/*
    Program: Optimized Power Function (Fast Exponentiation)
    Description: Calculates m^n using divide and conquer approach.

    Recurrence:
    If n is even:
        power(m, n) = power(m * m, n / 2)

    If n is odd:
        power(m, n) = m * power(m * m, (n - 1) / 2)

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

    // If n is even
    if(n % 2 == 0)
    {
        return power(m * m, n / 2);
    }

    // If n is odd
    return m * power(m * m, (n - 1) / 2);
}

int main()
{
    int x = 2;
    int y = 9;

    printf("Result: %d\n", power(x, y));

    return 0;
}