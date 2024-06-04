SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)
TARGETS=$(OBJECTS:.o=)
all: ${TARGETS} compare2-O3 compare3-O3
clean:
	rm -f ${TARGETS} ${OBJECTS} log*
.PHONY: all clean
${OBJECTS}: Makefile
CFLAGS=-O0 -m32 -ggdb -no-pie -fno-pic
LDFLAGS=${CFLAGS}
CC=gcc

compare2-O3: compare2.c Makefile
	gcc ${CFLAGS} -O3 -o compare2-O3 compare2.c

compare3-O3: compare3.c Makefile
	gcc ${CFLAGS} -O3 -o compare3-O3 compare3.c
