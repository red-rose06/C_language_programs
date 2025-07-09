//WAP to input and array, print it and the maximum and minimum number
#include <stdio.h>
void main()
{
    int a[25], limit, i, min, max;
    printf("Enter the limit of the array: ");
    scanf("%d", &limit);
    for(i=0;i<limit;i++)
    {
        printf("\nEnter element %d: ",i+1 );
        scanf("%d", &a[i]);
    }
    min = a[0], max = a[0];
    printf("\nThe array entered is: ");
    for(i=0; i<limit; i++)
    {
        printf("%d   ", a[i]);
        if(a[i]<min)
            min = a[i];
        if(a[i]>max)
            max = a[i];
    }
    printf("\nThe smallest number is %d and the largest number is %d", min, max);
}
