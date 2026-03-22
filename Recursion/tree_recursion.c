#include <stdio.h>

/*
    Program: Tree Recursion Example
    Description: Demonstrates tree recursion where a function calls itself
                 more than once, forming a tree-like structure.

    Type: Tree Recursion
*/

void fun(int n)
{
    // Base condition: stops recursion when n becomes 0
    if(n > 0)
    {
        printf("%d ", n);

        fun(n - 1);   // First recursive call
        fun(n - 1);   // Second recursive call
    }
}

int main()
{
    int x = 3;

    printf("Output:\n");
    fun(x);

    return 0;
}


 /*
    Comparison: Linear vs Tree Recursion

    | Feature   | Linear Recursion | Tree Recursion |
    |-----------|------------------|----------------|
    | Calls     | One call         | Multiple calls |
    | Structure | Linear           | Tree-like      |
    | Time      | Faster           | Slower         |
    | Memory    | Less             | More           |
    | Example   | Factorial        | Fibonacci      |
*/








*/