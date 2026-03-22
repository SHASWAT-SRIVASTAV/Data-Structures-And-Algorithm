#include <stdio.h>

/*
    Program: Head Recursion Example
    Description: Demonstrates head recursion where the recursive call
                 is made before executing the remaining code.
*/

void fun1(int n)
{
    // Base condition: stop when n becomes 0
    if(n > 0)
    {
        fun1(n - 1);   // Recursive call (executed first)
        printf("%d ", n);  // Executes after returning from recursion
    }
}

int main()
{
    int x = 3;

    printf("Output:\n");
    fun1(x);

    return 0;
}