#include <stdio.h>

/*
    Program: Head & Tail Recursion Combined
    Description: Demonstrates a function where both head and tail recursion
                 are used together.

    Type: Head + Tail Recursion
*/

void fun(int n)
{
    // Base condition: stops recursion when n becomes 0
    if(n > 0)
    {
        printf("%d ", n);   // Work before recursive call (Tail part)

        fun(n - 1);         // Recursive call

        printf("%d ", n);   // Work after recursive call (Head part)
    }
}

int main()
{
    int x = 3;

    printf("Output:\n");
    fun(x);

    return 0;
}