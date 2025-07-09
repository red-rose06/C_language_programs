//Program to print Factorial of 1 to n where n is given by user.
#include <stdio.h>
void main()
{
    int n, c, i, p;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(c=1;c<=n;c++)
    {
        p=1;
        for(i=1;i<=c;i++)
            p*=i;
        printf("\nFactorial of %d is: %d", c, p);
    }
}
