//Accept a no and print its factorial using function
//with parameter(number) and return value(factorial)
#include<stdio.h>
long factorial(int);
void main()
{
    int num;
    long fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num>0)
    {
         fact = factorial(num);
         printf("\nThe factorial of %d is %d", num, fact);
    }
   else
    printf("\nThe number should be greater than 0.");
}
long factorial(int n)
{
    int i;
    long f=1;
    for(i=2;i<=n;i++)
        f*=i;

    return f;
}
