main:
    mov sp, #128
    sub sp, sp, #8
    mov r0, #77
    str r0, [sp]
    ldr r1, [sp]
    mov r2, #99
    str r2, [sp, #4]
    ldr r4, [sp, #4]

end:
    b end


