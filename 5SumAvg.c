//Tut2P2: Program to input 5 numbers and print their sum and average.
#include <stdio.h>
void main()
{
    int n1, n2, n3, n4, n5;
    printf("\nEnter first number: ");
    scanf("%d",&n1);
    printf("\nEnter second number: ");
    scanf("%d",&n2);
    printf("\nEnter third number: ");
    scanf("%d",&n3);
    printf("\nEnter fourth number: ");
    scanf("%d",&n4);
    printf("\nEnter fifth number: ");
    scanf("%d",&n5);
    printf("\nThe sum of all five numbers is %d",(n1+n2+n3+n4+n5));
    printf("\nThe average of all five numbers is %f",(float)(n1+n2+n3+n4+n5)/5);
}
