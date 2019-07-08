#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

// comments comments comments
int collatz(int n)
{
    if (n == 1)
        return 0;
    else if (n % 2 == 0 )
        return 1 + collatz(n / 2);
    else
        return 1 + collatz((3 * n) + 1);        
}

int main(void)
{
    int n = get_int("Hello give me an int: ");
    int k = collatz(n);
    printf("Steps: %i\n", k);
}