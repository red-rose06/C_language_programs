//Function with argument, without return type to reverse a given string
#include<stdio.h>
void reverse(char[]);
void main()
{
    char str[15];
    printf("Enter the string to be reversed: ");
    scanf("%s", &str);
    reverse(str);
}
void reverse(char input[])
{
    int len, i, j;
    char output[15];
    for(i=0;input[i]!='\0';i++);
    len=i;
    for(i=0, j=len-1; j>=0; i++, j--)
        output[i]=input[j];
    output[i]='\0';
    printf("\nThe reversed string is: %s", output);
}
