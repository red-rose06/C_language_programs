//Using Function and Pointers
//1. Addition, 2. Factorial, 3. Swap (display output from both function and main)
#include <stdio.h>

void sum(int *a, int *b)
{
    int c;
    c = *a + *b;
    printf("\nThe sum of %d and %d gives %d.", *a, *b, c);
}

void main()
{
    int p, q;
    printf("\nEnter the first number: ");
    scanf("%d", &p);
    printf("\nEnter the second number: ");
    scanf("%d", &q);

    sum(&p, &q);
}
