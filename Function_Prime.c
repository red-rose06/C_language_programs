//Accept a number and print whether it is prime or not
//Function with parameter, without return type
#include<stdio.h>
void check_prime(int n)
{
    int i, flag=1;
    if(n<0)
        printf("\nThe number should not be negative.");
    else if((n==0)||(n==1))
        printf("\nThe number is neither prime nor composite.");
    else
    {
        for(i=2;i<=(n/2);i++)
        {
            if(n%i==0)
            {
                flag=0;
                printf("\n%d is a composite umber.", n);
                break;
            }
        }
        if(flag==1)
            printf("\n%d is a prime number.", n);
    }
}
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check_prime(num);
}
