/*
4
4 3
4 3 2
4 3 2 1
*/
#include <stdio.h>
void main()
{
    int i, j;
    for(i = 0; i<4; i++)
    {
        for(j=4; j>=4-i; j--)
            printf("%d  ", j);
        printf("\n");
    }
}
