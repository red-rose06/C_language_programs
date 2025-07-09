//Program to demonstrate how to use unions.
#include <stdio.h>
struct S
{
    int c;
    union U
    {
        int a;
        char b;
    };
};
int main(int argc, char **argv)
{
    struct S v;
    v.a = 50;
    v.b = 65;
    printf("%d %c", v.a, v.b);
}
