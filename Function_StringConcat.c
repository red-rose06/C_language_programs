//Program that uses functions to perform concatenation of two strings
#include <stdio.h>
void concat(char[], char[]);
void main()
{
    char a[10], b[10];
    printf("Enter the first string: ");
    scanf("%s", &a);
    printf("Enter the second string: ");
    scanf("%s", &b);
    concat(a, b);
}
void concat(char s1[], char s2[])
{
    char s3[20];
    int i, j;
    for(i=0;s1[i]!='\0';i++)
        s3[i]=s1[i];
    j=i;
    for(i=0;s2[i]!='\0';i++,j++)
        s3[j]=s2[i];
    s3[j]='\0';
    printf("\nThe concatenated string is: %s", s3);
}
