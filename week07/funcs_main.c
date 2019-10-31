#include<stdio.h>

int foo(int n);
int goo(int n);

int main(int argc, char **argv)
{
    int r;

    r = foo(10);
    printf("foo(10) = %d\n", r);

    r = goo(10);
    printf("goo(10) = %d\n", r);
    
    return 0;
}
