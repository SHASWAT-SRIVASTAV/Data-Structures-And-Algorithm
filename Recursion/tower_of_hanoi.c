#include <stdio.h>

/*
    Program: Tower of Hanoi
    Description: Solves the Tower of Hanoi problem using recursion.

    Rules:
    1. Move only one disk at a time
    2. A larger disk cannot be placed on a smaller disk
    3. Use auxiliary rod to transfer disks

    Steps:
    - Move (n-1) disks from source → auxiliary
    - Move nth disk from source → destination
    - Move (n-1) disks from auxiliary → destination
*/

void TOH(int n, int source, int auxiliary, int destination)
{
    // Base condition
    if(n <= 0)
        return;

    // Move n-1 disks from source to auxiliary
    TOH(n - 1, source, destination, auxiliary);

    // Move nth disk
    printf("Move disk from %d to %d\n", source, destination);

    // Move n-1 disks from auxiliary to destination
    TOH(n - 1, auxiliary, source, destination);
}

int main()
{
    int n = 3;

    printf("Steps:\n");
    TOH(n, 1, 2, 3);

    return 0;
}