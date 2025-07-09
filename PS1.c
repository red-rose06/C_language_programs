/**1. WAP to create a new array from a given array with the elements
divisible by a specific number.
Input: limit=n, accept n numbers, check divisibility for=m*/

#include <stdio.h>
void main()
{
    int n, m, a[10], b[10], i, j;
    printf("Enter limit of the array: ");
    scanf("%d", &n);
    printf("\nEnter the array: ");
    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\nEnter number whose divisibility needs to be checked: ");
    scanf("%d", &m);
    for(i=0, j=0;i<n;i++)
    {
        if((a[i]%m)==0)
        {
            b[j]=a[i];
            printf("\nyes: %d", b[j]);
            j++;
        }
    }
    printf("\nGiven array: ");
    for(i=0;i<n;i++)
        printf("%d\t", a[i]);
    printf("\nNew array: ");
    for(i=0;i<j;i++)
        printf("%d\t", b[i]);
}
