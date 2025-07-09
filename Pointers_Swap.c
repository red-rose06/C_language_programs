//Program to swap two numbers using call by reference

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\nNumbers after swapping: a=%d, b=%d", *a, *b);
}

void main()
{
    int n1, n2;
    printf("\nEnter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("\nBefore swapping: n1=%d, n2=%d", n1, n2);

    swap(&n1, &n2);
    printf("\n(In Main) Numbers after swapping: n1=%d, n2=%d", n1, n2);
}
