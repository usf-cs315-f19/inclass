PROGS = max_main max3_main count_zeros_main

OBJS = max_c.o max_a.o max3_c.o max3_a.o \
       count_zeros_c.o count_zeros_a.o

CFLAGS = -g

all : ${PROGS}

max_c.o : max_c.c
	gcc ${CFLAGS} -c -o max_c.o max_c.c

max_a.o : max_a.s
	as -o max_a.o max_a.s

max_main : max_main.c max_c.o max_a.o
	gcc ${CFLAGS} -o max_main max_main.c max_c.o max_a.o

max3_c.o : max3_c.c
	gcc ${CFLAGS} -c -o max3_c.o max3_c.c

max3_a.o : max3_a.s
	as -o max3_a.o max3_a.s

max3_main : max3_main.c max3_c.o max3_a.o
	gcc ${CFLAGS} -o max3_main max3_main.c max3_c.o max3_a.o

count_zeros_c.o : count_zeros_c.c
	gcc ${CFLAGS} -c -o count_zeros_c.o count_zeros_c.c

count_zeros_a.o : count_zeros_a.s
	as -o count_zeros_a.o count_zeros_a.s

count_zeros_main : count_zeros_main.c count_zeros_c.o count_zeros_a.o
	gcc ${CFLAGS} -o count_zeros_main count_zeros_main.c \
            count_zeros_c.o count_zeros_a.o

clean:
	rm -rf ${PROGS} ${OBJS}

