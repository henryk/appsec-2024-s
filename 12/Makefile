SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)
TARGETS=$(OBJECTS:.o=)
all: ${TARGETS}
clean:
	rm -f ${TARGETS} ${OBJECTS}
.PHONY: all clean
${OBJECTS}: Makefile
CFLAGS=-m32 -no-pie -std=gnu99 -fno-pic -fno-stack-protector -O0 -g
LDFLAGS=${CFLAGS}
CC=gcc
