#include <stdio.h>

/*
    Program: Factorial using Recursion
    Description: Calculates the factorial of a number using recursion.

    Recurrence Relation:
    fact(n) = fact(n - 1) * n

    Base Case:
    fact(0) = 1
*/

int fact(int n)
{
    // Base condition
    if(n == 0)
    {
        return 1;
    }

    // Recursive relation
    return fact(n - 1) * n;
}

int main()
{
    int x = 5;

    printf("Factorial: %d\n", fact(x));

    return 0;
}