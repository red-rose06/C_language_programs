//Program to print length of the given string
#include<stdio.h>
void main()
{
    int i;
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Given string is: %s", str);
    for(i=0;str[i]!='\0';i++);
    printf("\nLength of the given string is %d.", i);
}
