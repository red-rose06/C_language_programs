/**2. WAP to split an array. Take position from user.
Add the first half (before given position) after the
second half(from given position) of the array*/

#include <stdio.h>
void main()
{
    int lim, pos, a1[10], a2[10], i, j;
    printf("Enter limit of the array: ");
    scanf("%d", &lim);
    printf("\nEnter the array: ");
    for(i=0;i<lim;i++)
    {
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &a1[i]);
    }
    printf("\nGiven array: ");
    for(i=0;i<lim;i++)
        printf("%d  ", a1[i]);
    printf("\nEnter the position(index) from which the array should be split: ");
    scanf("%d", &pos);
    for(i=0, j=lim-pos; i<pos; i++, j++)
        a2[j]=a1[i];
    for(i=pos, j=0; i<lim; i++, j++)
        a2[j]=a1[i];
    printf("\nNew array: ");
    for(j=0;j<lim;j++)
        printf("%d  ", a2[j]);
}
