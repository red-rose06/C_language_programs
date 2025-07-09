//Pass array to function, i.e., pass base address of array
//Print all elements of array by incrementing the pointer in a for loop

#include <stdio.h>

void array_print(int *p, int lim)     //p=&a[0]
{
    int i;
    printf("\nEntered array is: \n");
    for(i=0;i<lim;i++)
    {
        printf("%d    ", *p);
        p++; //Next element address
    }

}

void main()
{
    int a[10], n, i;
    printf("Enter the limit of the array: ");
    scanf("%d", &n);
    printf("\nEnter the array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    //Call function and pass array base address
    array_print(a, n);          //a=&a[0]
}
