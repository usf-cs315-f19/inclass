#include<stdlib.h>
#include<stdio.h>

int uint_to_binstr(char *s, unsigned int value, int nbits, int pretty)
{
    int i;
    
    if ((nbits < 0) || (nbits > 32) || (!((nbits % 4) == 0))) {
        printf("uint_to_binstr: nbits must be 0 <= nbits <= 32 and nbits % 4 == 0");
        exit(-1);
    } 
    
    if (!pretty) {
        s[0] = '0';
        s[1] = 'b';
        s = s + 2;
    }

    value = value << (32 - nbits);
    
    for (i = 0; i < nbits; i++) {
        *s = (value & 0x80000000) ? '1' : '0';
        value = value << 1;
        s = s + 1;
        if (pretty && (((i+1) % 4) == 0)) {
            *s = ' ';
            s = s + 1;
        }
    }
    
    *s = '\0';

    return 0;
}

int print_binary(unsigned int value, int nbits, int pretty, int newline)
{
    char s[64];
    
    uint_to_binstr(s, value, nbits, pretty);
    printf("%s", s);
    if (newline) {
        printf("\n");
    }

    return 0;
}
