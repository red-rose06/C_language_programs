/*
WAP to take length and breadth from user and print a hollow rectangle.
Example:
Input: R=5, C=4
Output:
****
*   *
*   *
*   *
****
*/
#include<stdio.h>
void main()
{
    int r, c, i, j;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &c);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &r);
    printf("\nHollow rectangle:\n");
    for(j=1;j<=c; j++)
        printf("*");
    for(i=2;i<=r;i++)
    {
        printf("\n*");
        for(j=2;j<=c-1;j++)
            printf(" ");
        printf("*");
    }
    printf("\n");
    for(j=1;j<=c; j++)
        printf("*");
}
