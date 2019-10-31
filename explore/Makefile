# Names of the executables we want to generate
PROGS = fib_iter cpsr print_binary_test sign_extend

# Intermediate object files that we want to clean up
OBJS = print_binary

# Any special flags we want to give to gcc during compilation
CFLAGS = -g

# Pattern rules to avoid explicit rules
%.o : %.c
	gcc ${CFLAGS} -c -o $@ $<

%.o : %.s
	as -o $@ $<


all : ${PROGS}

fib_iter : fib_iter.c
	gcc ${CFLAGS} -o $@ $^

cpsr : cpsr.c
	gcc ${CFLAGS} -o $@ $^

print_binary_test : print_binary_test.c print_binary.o
	gcc ${CFLAGS} -o $@ $^

sign_extend : sign_extend.c print_binary.o
	gcc ${CFLAGS} -o $@ $^

clean:
	rm -rf ${PROGS} ${OBJS} *~

