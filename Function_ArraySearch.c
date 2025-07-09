//Accept limit and array from user, pass it to function and search an element.
#include <stdio.h>
void search(int a[], int lim, int key)
{
    int flag=0, i;
    for(i=0;i<lim;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            printf("\nThe number %d is found at index position %d", key, i);
            break;
        }
    }
    if(flag==0)
        printf("\nThe number %d is not present in the array.", key);
}
void main()
{
    int a[15], lim, key, i;
    printf("Enter the limit of the array: ");
    scanf("%d", &lim);
    printf("\nEnter the array:\n");
    for(i=0; i<lim; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\nEntered array is:\n");
    for(i=0; i<lim; i++)
    {
        printf("%d   ", a[i]);
    }
    printf("\nEnter number to be searched: ");
    scanf("%d", &key);
    search(a, lim, key);
}
