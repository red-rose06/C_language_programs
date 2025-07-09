//Program to demonstrate how to use unions.
#include <stdio.h>
union U
{
    int a;
    char b;
};
int main(int argc, char **argv)
{
    union U var;
    var.a = 50;
    var.b = 65;
    printf("%d %c", var.a, var.b);
}
