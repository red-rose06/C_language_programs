/*
Program asks user to choose any one of the following
1. Check whether a number is even or odd
2. Print that numbers factorial
3. Check whether a number is prime or not
Use switch case
*/
#include <stdio.h>
void main()
{
    int n, op, i, f;
    printf("1. Check whether a number is even or odd\n2. Print factorial of a number\n3. Check whether a number is prime or not.");
    printf("\nChoose any one of the above by entering the respective digit: ");
    scanf("%d", &op);

    switch(op)
    {
    case 1:
        printf("\nEnter a number: ");
        scanf("%d", &n);
        if(n%2==0)
            printf("\n%d is even", n);
        else
            printf("\n%d is odd", n);
        break;
    case 2:
        printf("\nEnter a number: ");
        scanf("%d", &n);
        f = 1;
        for(i=1;i<=n;i++)
            f = f*i;
        printf("\nFactorial of %d is %d.", n, f);
        break;
    case 3:
        printf("\nEnter a number: ");
        scanf("%d", &n);
        f=0;
        for(i=2;i<=n/2; i++)
        {
            if(n%i==0)
                f++;
        }
        if(f==0)
            printf("\n%d is a prime number.", n);
        else
            printf("\n%d is not a prime number.", n);
        break;
    default:
        printf("\nIncorrect option chosen.");
    }
}
