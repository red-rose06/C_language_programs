//Program to print factorial of a number using pointers and functions.

/*A little twist: we are returning the address of the factorial calculated to the main.
A pointer in main will accept it.
However, to do so, we need to declare the variable that stores the factorial as a 'static'.
This is because while returning the address, it returns a garbage value.
(Because it is a local variable and accessible only in the function. This is problematic since we want to access the value using pointers in main.)
To avoid that, declaring the variable as a 'static' variable is necessary so that the address does not change while returning to main.*/

//Making a variable 'static' means making the original variable accessible throughout the program, changing its value anywhere changes the original value.
//In other words 'static' variables, even if declared in a function, are not local.

#include<stdio.h>

int *factorial(int *n)
{
    static int f;
    int i;
    f=1;
    for(i=2;i<=*n;i++)
    {
        f*=i;
    }
    //printf("\n%p",&f);
    //printf("\n%d",*(&f));
    return &f;
}

void main()
{
    int num;
    int *fact;
    printf("Enter a number: ");
    scanf("%d", &num);

    fact =factorial(&num);

   printf("\nFactorial of %d is %d", num, *fact);
}
