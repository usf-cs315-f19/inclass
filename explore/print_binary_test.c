#include<stdio.h>

#include"print_binary.h"

int main(int argc, char **argv)
{
    unsigned int v0 = 0xFFFFFFFF;
    unsigned int v1 = 0xE321ABCD;
    unsigned int v2 = 0x3;
    unsigned int v3 = 0xAABB;

    printf("%X\n", v0);
    print_binary(v0, 32, 0, 1);
    print_binary(v0, 32, 1, 1);

    printf("%X\n", v1);
    print_binary(v1, 32, 0, 1);
    print_binary(v1, 32, 1, 1);

    printf("%X\n", v2);
    print_binary(v2, 4, 0, 1);
    print_binary(v2, 4, 1, 1);

    printf("%X\n", v3);
    print_binary(v3, 16, 0, 1);
    print_binary(v3, 16, 1, 1);        

    return 0;
}
