# Names of the executables we want to generate
PROGS = smult2_main fact_main

# Intermediate object files that we want to clean up
OBJS = smult2_c.o smult2_a.o fact_c.o

# Any special flags we want to give to gcc during compilation
CFLAGS = -g

# Pattern rules to avoid explicit rules
%.o : %.c
	gcc ${FLAGS} -c -o $@ $<

%.o : %.s
	as -o $@ $<


all : ${PROGS}

smult2_main : smult2_main.c smult2_c.o smult2_a.o
	gcc ${CFLAGS} -o $@ $^

fact_main : fact_main.c fact_c.o fact_a.o
	gcc ${CFLAGS} -o $@ $^

clean:
	rm -rf ${PROGS} ${OBJS}

