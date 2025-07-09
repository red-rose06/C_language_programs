//Program to use function with parameters to calculate length of array
#include<stdio.h>
int length(char[]);
void main()
{
    int s[15], len;
    printf("Enter the string: ");
    scanf("%s", &s);
    len = length(s);
    printf("\nLength of the string is: %d", len);
}
int length(char str[])
{
    int l=0, i;
    for(i=0;str[i]!='\0';i++)
        l++;
    return l;
}
