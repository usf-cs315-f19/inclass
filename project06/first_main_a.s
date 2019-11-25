main:
    mov r0, #1
    mov r1, #2
    bl first
end:
    b end

first:
    add r0, r0, r1
    bx lr

