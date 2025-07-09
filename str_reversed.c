//Program to print a string in reverse order.
#include<stdio.h>
void main()
{
    int i, c=0;
    char s[10];
    printf("Enter a string: ");
    scanf("%s", s);
    for(i=0;s[i]!='\0';i++)
        c++;
    c--;
    printf("\nReversed string is: ");
    for(i=c;i>=0;i--)
        printf("%c", s[i]);
}
