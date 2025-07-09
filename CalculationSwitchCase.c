/**User choses Addition, Subtraction, Multiplication or Division.
Use switch case
Continue running until user enters 0 - use do while loop*/
#include <stdio.h>
void main()
{
    int a, b, op, i, check;
    do
    {
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Divison");
    printf("\nSelect any one by entering the respective number: ");
    scanf("%d", &op);

    switch(op)
    {
    case 1:
        printf("\nYou have chosen Addition.");
        printf("\nEnter first number: a = ");
        scanf("%d", &a);
        printf("\nEnter second number: b = ");
        scanf("%d", &b);
        printf("\n%d + %d = %d", a, b, a+b);
        break;
    case 2:
        printf("\nYou have chosen Subtraction.");
        printf("\nEnter first number: a = ");
        scanf("%d", &a);
        printf("\nEnter second number: b = ");
        scanf("%d", &b);
        printf("\n %d - %d = %d", a, b, a-b);
        break;
    case 3:
        printf("\nYou have chosen Multiplication.");
        printf("\nEnter first number: a = ");
        scanf("%d", &a);
        printf("\nEnter second number: b = ");
        scanf("%d", &b);
        printf("\n%d x %d = %d", a, b, a*b);
        break;
    case 4:
        printf("\nYou have chosen Division.");
        printf("\nEnter first number: a = ");
        scanf("%d", &a);
        printf("\nEnter second number: b = ");
        scanf("%d", &b);
        printf("\n%d / %d = %d", a, b, a/b);
        break;
    default:
        printf("Incorrect option chosen.");
    }
    printf("\nEnter 0 to exit. Enter any other digit to go again.\n");
    scanf("%d", &check);
    }while(check!=0);
}
