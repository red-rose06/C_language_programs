//Program to print all prime numbers between given two numbers.
#include <stdio.h>
void main()
{
    int i, j, a, b, p;
    printf("Enter smaller number: ");
    scanf("%d",&a);
    printf("\nEnter larger number: ");
    scanf("%d",&b);
    if(a>=b)
        printf("Wrong input");
    else
    {
        for(i=a;i<b;i++)
        {
            p=1;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    p=0;
                    break;
                }
            }
            if(p==1)
                printf("%d   ", i);
        }
    }
}
