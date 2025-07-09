//Program to print 1) diagonal elements of given matrix 2) lower triangular elements 3) upper triangular elements
#include <stdio.h>
void main()
{
    int i, j, r, c, A[10][10];
    printf("Enter the no of rows for matrix: ");
    scanf("%d", &r);
    printf("\nEnter the no of columns for matrix: ");
    scanf("%d", &c);
    printf("\nEnter matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter A[%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Entered matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    if(r==c)
    {
        printf("\nDiagonal elements of matrix: ");
        for(i=0; i<r;i++)
        {
            printf("%d\t", A[i][i]);
        }
    }
    else
        printf("The matrix needs to be a square matrix to print diagonal elements.");

}

