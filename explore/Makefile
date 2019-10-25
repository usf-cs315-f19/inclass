# Names of the executables we want to generate
PROGS = fib_iter cpsr

# Intermediate object files that we want to clean up
OBJS = 

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

clean:
	rm -rf ${PROGS} ${OBJS} *~

