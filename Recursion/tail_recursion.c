#include <stdio.h>

/*
    Program: Tail Recursion Example
    Description: Demonstrates tail recursion where the recursive call
                 is the last operation in the function.

    Type: Tail Recursion
*/

void fun1(int n)
{
    // Base condition: stops recursion when n becomes 0
    if(n > 0)
    {
        printf("%d ", n);   // Work is done before recursive call

        fun1(n - 1);        // Recursive call at the end (tail)
    }
}

int main()
{
    int x = 3;

    printf("Output:\n");
    fun1(x);

    return 0;
}