//Program to concatenate second string after first string and store in third string.
#include <stdio.h>
void main()
{
    int a, b;
    char s1[10], s2[10], s3[20];
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);
    for(a=0;s1[a]!='\0';a++)
        s3[a]=s1[a];
    for(b=a, a=0; s2[a]!='\0';b++, a++)
        s3[b]=s2[a];
    s3[b]='\0';
    printf("Concatenated string is: %s", s3);
}
