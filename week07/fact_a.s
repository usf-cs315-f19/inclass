    .global fact_iter_a
    .global fact_rec_a
    
    .func fact_iter_a
fact_iter_a:
    mov r1, #1
while:
    cmp r0, #0
    beq endwhile
    mul r1, r0, r1
    sub r0, r0, #1
    b while
endwhile:   
    mov r0, r1
    bx lr
    .endfunc
 

    .func fact_rec_a
fact_rec_a:
    sub sp, sp, #8
    
    /* base case */
    cmp r0, #0
    bne fact_recursive_step
    mov r1, #1
    b fact_end
    
    /* recursive step */
fact_recursive_step:    
    str lr, [sp]
    str r0, [sp, #4]

    sub r0, r0, #1
    bl fact_rec_a
    mov r1, r0
    
    ldr r0, [sp, #4] /* restore old n */
    ldr lr, [sp]

    mul r1, r0, r1
    
fact_end:   

    mov r0, r1
    add sp, sp, #8
    bx lr
    .endfunc
