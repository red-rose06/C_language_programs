//Program to print accepted string in vertical
#include <stdio.h>
void main()
{
    int i;
    char s[15];
    printf("Enter a string: ");
    scanf("%s", s);
    for(i=0; s[i]!='\0'; i++)
        printf("\n%c", s[i]);
}
