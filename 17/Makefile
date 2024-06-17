SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)
TARGETS=$(OBJECTS:.o=)
all: ${TARGETS}
clean:
	rm -f ${TARGETS} ${OBJECTS} log*
.PHONY: all clean
${OBJECTS}: Makefile
CFLAGS=
LDFLAGS=${CFLAGS}
CC=gcc
