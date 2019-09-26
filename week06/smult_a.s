    .global smult_a
    .func smult_a

    /* r0 - int *array */
    /* r1 - int len */
    /* r2 - int s */
    /* r3 - int i */
smult_a:
    mov r3, #0
loop:   
    cmp r3, r1
    beq endloop
    ldr r12, [r0]
    mul r12, r2, r12
    str r12, [r0]    
    add r3, r3, #1
    add r0, r0, #4
    b loop
endloop:
    mov r0, #0
    bx lr
