SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)
TARGETS=$(OBJECTS:.o=)
all: ${TARGETS}
clean:
	rm -f ${TARGETS} ${OBJECTS} log*
.PHONY: all clean
${OBJECTS}: Makefile
CFLAGS=-O0
LDFLAGS=${CFLAGS} -lpthread
CC=gcc
