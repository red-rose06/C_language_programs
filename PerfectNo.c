//Tut2P1: Program to check whether given number is perfect or not.
#include <stdio.h>
void main()
{
    int num, sum;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
            sum+=i;
    }
    if(num==sum)
        printf("%d is a perfect number.", num);
    else
        printf("%d is not a perfect number.", num);
}
