//Program to print table of even numbers between 1 and n. Value of n is given by user
/*
Table of 2
Table of 4
.
.
Table of n
*/
#include<stdio.h>
void main()
{
    int n, i, c;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(c=2;c<=n;c+=2)
    {
        for(i=1;i<=10;i++)
            printf("%d  ", c*i);
        printf("\n");
    }
}
