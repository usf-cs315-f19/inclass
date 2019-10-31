#include<stdio.h>

int bar(int n)
{
    int r;

    r = n * 2;

    return r;
}

int foo(int n)
{
    int r;

    r = bar(n-1);

    return r;
}

int goo(int n)
{
    int r;

    r = bar(n-1) + bar(n-2);

    return r;
}
