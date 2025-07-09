//WAP to convert decimal number to binary number.
#include<stdio.h>
void main()
{
    int dec, d, temp[20], bi[20], i, len=0;
    printf("Enter the decimal number: ");
    scanf("%d", &dec);
    d=dec;
    //printf("\ndec=%d, d=%d", dec, d);
    //dividing by 2 and adding 1's and 0's
    i=0;
    while(d>0)
    {
        if(d%2==1)
            temp[i] = 1; //printf("\ntemp[%d]=%d", i, temp[i]);
        else
            temp[i] = 0; //printf("\ntemp[%d]=%d", i, temp[i]);
        d=d/2; //printf("\nd=%d", d);
        i++; //printf("\ni=%d", i);
        len++; //printf("\nlen=%d", len);
    }
    //reversing temp to get correct binary number
    i=0;
    while(i<len)
    {
        bi[i] = temp[len-i-1];
        i++;
    }
    printf("\nBinary equivalent of %d is: ", dec);
    for(i=0;i<len;i++)
        printf("%d", bi[i]);
}
