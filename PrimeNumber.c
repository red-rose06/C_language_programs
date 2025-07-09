//Program to check whether given no is prime no or not
#include <stdio.h>
void main()
{
    int num, f, i;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num==0||num==1)
        printf("%d is neither prime nor composite.", num);
    else
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                f=1;
                printf("%d is composite.", num);
                break;
            }
        }
        if(f==0)
            printf("%d is prime.",num);
    }

}
