main:
    bl simple
end:
    b end

simple:
    mov r0, #1
    mov r1, #2
    add r2, r0, r1
    sub r3, r1, r0
    sub r4, r0, r1
    cmp r0, r0
    cmp r0, r1
    cmp r1, r0
    mov r0, r2
    cmp r0, r0
    beq done
    mov r0, #99
done:
    bx lr

