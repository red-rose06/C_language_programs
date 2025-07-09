/*
Program to add two matrices.
Accept no of rows(r) and columns(c) from the user and hence accept both matrices (A and B)
Add and print resultant matrix (C).
*/
#include <stdio.h>
void main()
{
    int i, j, ra, ca, rb, cb, A[10][10], B[10][10], C[10][10];
    printf("Enter the no of rows for matrix A: ");
    scanf("%d", &ra);
    printf("\nEnter the no of columns for matrix A: ");
    scanf("%d", &ca);
    printf("\nEnter matrix A: \n");
    for(i=0;i<ra;i++)
    {
        for(j=0;j<ca;j++)
        {
            printf("Enter A[%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the no of rows for matrix B: ");
    scanf("%d", &rb);
    printf("\nEnter the no of columns for matrix B: ");
    scanf("%d", &cb);
    printf("\nEnter matrix B: \n");
    for(i=0;i<rb;i++)
    {
        for(j=0;j<cb;j++)
        {
            printf("Enter B[%d][%d]: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }
    if((ra==rb)&&(ca==cb))
    {
        //Add and print C
        printf("\nAddition of both gives the resultant C matrix as follows: \n");
        for(i=0;i<ra;i++)
        {
            for(j=0;j<ca;j++)
            {
                C[i][j] = A[i][j] + B[i][j];
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    }
        else
            printf("\nAddition is not possible for matrices with different dimensions.");
}
