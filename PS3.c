/**WAP to find the first repeated element in an array
Example:
Input: lim=5, array: 10, 11, 10, 12, 11
Output: First repeated element is 10.
Input: lim=6, array: 1, 3, 6, 5, 3, 1
Output: First repeated element is  1
*/
#include<stdio.h>
void main()
{
    int lim, a[10], r, i, j, flag=0;
    printf("Enter limit of the array: ");
    scanf("%d", &lim);
    printf("\nEnter the array:\n");
    for(i=0;i<lim;i++)
    {
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &a[i]);
    }
                                                      //1, 3, 6, 5, 3, 7   lim=6
    for(i=0;i<lim;i++)                     //i=1
    {
        r=a[i];                                   //r=3
        for(j=i+1;j<lim;j++)                 //j=4, a[j]=3
        {
            if(a[j]==r)                       //3==3? yes
            {
                flag=1;
                printf("\nThe first repeated element is %d.", a[j]);
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==0)
    printf("\nThere is no repeated element in the array.");
}
