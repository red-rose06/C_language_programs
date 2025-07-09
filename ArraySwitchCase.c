/*
WAP to print a program using switch case which performs the following array operations:
1) Accept n and numbers
2) Display
3) Search for an element
4) Smallest number
5)Largest number
6)default
*/
#include <stdio.h>
void main()
{
    int op, n, a[15], i, key, flag, min, max;
    printf("\n1) Enter an integer array of n elements and display it");
    printf("\n2) Search for an element in the array");
    printf("\n3) Print smallest number");
    printf("\n4) Print largest number");
    printf("\nChoose an option: ");
    scanf("%d", &op);
    switch(op)
    {
    case 1:
        printf("\nEnter the limit of the array: ");
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            printf("\nEnter element %d: ",i+1 );
            scanf("%d", &a[i]);
        }
        printf("\nThe array entered is: ");
        for(i=0; i<n; i++)
            printf("%d   ", a[i]);
    break;

    case 2:
        printf("\nEnter the limit of the array: ");
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            printf("\nEnter element %d: ",i+1 );
            scanf("%d", &a[i]);
        }
        printf("Enter the element you want to search: ");
        scanf("%d", &key);
        for(i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                printf("Element found at position %d", i+1);
                flag=1;
                break;
            }
        }
        if(flag!=1)
            printf("Number not found");
    break;

    case 3:
        printf("\nEnter the limit of the array: ");
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            printf("\nEnter element %d: ",i+1 );
            scanf("%d", &a[i]);
        }
        min = a[0];
        printf("\nThe array entered is: ");
        for(i=0; i<n; i++)
        {
            printf("%d   ", a[i]);
            if(a[i]<min)
                min = a[i];
        }
        printf("\nThe smallest number is %d", min);
    break;
    case 4:
        printf("\nEnter the limit of the array: ");
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            printf("\nEnter element %d: ",i+1 );
            scanf("%d", &a[i]);
        }
        max = a[0];
        printf("\nThe array entered is: ");
        for(i=0; i<n; i++)
        {
            printf("%d   ", a[i]);
            if(a[i]>max)
                max = a[i];
        }
        printf("\nThe largest number is %d", max);
    break;
    default:
        printf("Wrong option chosen");
    }

}
