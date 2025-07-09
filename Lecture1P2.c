#include <stdio.h>
void main()
{
    int a, b, add, sub, multi, div;
    printf("Enter first number: ");
    scanf("%d",&a);                                                                                                       //'&' means 'address at'
    printf("Enter second number: ");
    scanf("%d",&b);                                                                                                      //'%d' for integer, '%c' for character, '%f' for float, '%s' for string
    add = a+b;
    printf("\nAddition of %d and %d is %d.\n",a,b,add);                           //%d is access specifier for integer
    sub = a-b;
    printf("\nSubtraction %d from %d gives %d.\n",b, a,sub);
    multi = a*b;
    printf("\nMultiplication of %d and %d is %d.\n",a,b,multi);
    div = a/b;
    printf("\nDivision of %d by %d is %d.\n",a,b,div);
}

