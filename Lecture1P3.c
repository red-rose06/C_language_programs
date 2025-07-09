//Program to print whether number is even or not
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%2==0)
        printf("Number is even.");
    else
        printf("Number is odd.");
}
