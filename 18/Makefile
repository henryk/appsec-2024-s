SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)
TARGETS=$(OBJECTS:.o=)
all: ${TARGETS} malloc-san shellcode-execstack
clean:
	rm -f ${TARGETS} ${OBJECTS} log* malloc-san shellcode-execstack
.PHONY: all clean
${OBJECTS}: Makefile
CFLAGS=-ggdb -O0 -m32
LDFLAGS=${CFLAGS}
CC=gcc

canary: canary.c Makefile
	gcc ${CFLAGS} -fno-stack-protector -o $@ canary.c

malloc-san: malloc.c Makefile
	gcc ${CFLAGS} -fsanitize=address -o $@ malloc.c

shellcode-execstack: shellcode.c Makefile
	gcc ${CFLAGS} -zexecstack -o $@ shellcode.c
