#include<stdio.h>

#include"print_binary.h"

/* Sign extend an n-bit value in an 32-bit word,
 * specify the position of the sign bit in sign_pos,
 * which is n - 1.
 */
int sign_extend_32(unsigned int value, int sign_pos)
{
    int sign;
    unsigned int mask_neg_32, mask_pos_32;
    unsigned long mask64;

    sign = (value >> sign_pos) & 0b1;
    mask64 = (0b1 << ((sign_pos) + 1)) - 1;
    mask_pos_32 = (unsigned int) mask64;
    mask_neg_32 = ~mask_pos_32;

    if (sign) {
        value = value | mask_neg_32;
    } else {
        value = value & mask_pos_32;
    }

    return value;
}

int main(int argc, char **argv)
{
    unsigned int pc, iw, target;
    int imm_32;
    
    iw = 0xE000F020;
    imm_32 = sign_extend_32(iw, 11);
    printf("imm_32 = %d\n", imm_32);

    iw = 0xE000FFFE;
    imm_32 = sign_extend_32(iw, 11);
    printf("imm_32 = %d\n", imm_32);    

    pc = 0x10568;
    target = pc + (imm_32 * 4);
    
    printf("pc     = %X\n", pc);
    printf("target = %X\n", target);


    pc = 0xFFF10568;
    target = pc + (imm_32 * 4);
    
    printf("pc     = %X\n", pc);
    printf("target = %X\n", target);
    
    return 0;
}
