SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)
TARGETS=$(OBJECTS:.o=) sum-O0 sum-O3
all: ${TARGETS}
clean:
	rm -f ${TARGETS} ${OBJECTS}
.PHONY: all clean
${OBJECTS}: Makefile
CFLAGS=-m32 -no-pie -std=gnu99 -fno-pic -fno-stack-protector -O0 -g -Wno-format-security
LDFLAGS=${CFLAGS}
CC=gcc

printf3: printf3.c Makefile
	gcc -m32 -march=i386 -z execstack -z norelro -no-pie -fno-stack-protector -Wno-format-security -o printf3 printf3.c

sum-O0: sum.c Makefile
	gcc ${CFLAGS} -O0 -o sum-O0 sum.c
sum-O3: sum.c Makefile
	gcc ${CFLAGS} -O3 -o sum-O3 sum.c
