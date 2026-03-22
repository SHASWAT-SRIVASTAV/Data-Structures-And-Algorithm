#include <stdio.h>

/*
    Program: Nested Recursion
    Description: Demonstrates recursion where a function calls itself
                 with another recursive call as its argument.

    Type: Nested Recursion
*/

int fun(int n)
{
    // Base condition
    if(n > 100)
    {
        return n - 10;
    }

    // Nested recursive call
    return fun(fun(n + 11));
}

int main()
{
    int x = 95;

    printf("Result: %d\n", fun(x));

    return 0;
}