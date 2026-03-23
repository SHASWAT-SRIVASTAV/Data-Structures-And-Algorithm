#include <stdio.h>

/*
    Program: Sum of First N Natural Numbers using Recursion
    Description: Calculates the sum of numbers from 1 to n using recursion.

    Recurrence Relation:
    sum(n) = sum(n - 1) + n

    Base Case:
    sum(0) = 0
*/

int sum(int n)
{
    // Base condition
    if(n == 0)
    {
        return 0;
    }

    // Recursive relation
    return sum(n - 1) + n;
}

int main()
{
    int x = 5;

    printf("Sum: %d\n", sum(x));

    return 0;
}