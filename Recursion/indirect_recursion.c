#include <stdio.h>

/*
    Program: Indirect Recursion Example
    Description: Demonstrates indirect recursion where two functions
                 call each other, forming a cycle.

    Type: Indirect Recursion
*/

void funB(int n);   // Forward declaration

void funA(int n)
{
    // Base condition
    if(n > 0)
    {
        printf("%d ", n);

        funB(n - 1);   // Calls another function
    }
}

void funB(int n)
{
    // Base condition
    if(n > 1)
    {
        printf("%d ", n);

        funA(n / 2);   // Calls back to funA (cycle)
    }
}

int main()
{
    int x = 20;

    printf("Output:\n");
    funA(x);

    return 0;
}