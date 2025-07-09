//Accept limit and array from user, pass it to function and print sum of elements
#include <stdio.h>
int array_sum(int a[], int l)
{
    int i, s=0;
    for(i=0;i<l;i++)
        s+=a[i];

    return s;
}
void main()
{
    int arr[10], lim, sum, i;
    printf("Enter the limit of the array: ");
    scanf("%d", &lim);
    printf("\nEnter the array:");
    for(i=0;i<lim;i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    sum = array_sum(arr, lim);
    printf("\nSum of all the numbers is %d.", sum);
}
