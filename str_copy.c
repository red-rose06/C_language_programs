//Print program to copy a string into another string
#include <stdio.h>
void main()
{
    int i;
    char s1[15], s2[15];
    printf("Enter a string: ");
    scanf("%s", s1);
    for(i=0; s1[i]!='\0'; i++)
        s2[i] = s1[i];
    s2[i] = '\0';
    printf("Copied string: %s", s2);
}
