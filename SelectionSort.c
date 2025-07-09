//Program to sort an array in ascending order using Bubble Sort Method
//At the end of pass 1: the smallest element comes to the start of the array
//At the end of pass 2: the second smallest element comes to the second position in the array
//and so on till the last two elements are also sorted in pass 'n-1'.
/**Example:
Given array: 10, 9, 15, 20, 1, 24
Pass 1:
10, 9, 15, 20, 1, 24
a[i]=9
Compare index of element a[i] & 1: since 10>9, exchange them
9, 10, 15, 20, 1, 24
Compare index of element a[i] & 2: since 10<15, no change
*/
#include<stdio.h>
void main()
{
    int a[10], lim, i ,j, temp;
    printf("Enter the limit: ");
    scanf("%d", &lim);
    printf("Enter the array: ");
    for(i=0;i<lim;i++)
    {
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\nGiven array is:\n");
    for(i=0;i<lim;i++)
        printf("%d\t", a[i]);

    //Selection Sort (ascending)
    for(i=0;i<lim-1;i++)
    {
        for(j=i+1;j<lim;j++)
        {
            if(a[i]>a[j])
            {
                //Exchange the two
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nSorted array is:\n");
    for(i=0;i<lim;i++)
        printf("%d\t", a[i]);
}
