SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)
TARGETS=$(OBJECTS:.o=)
all: ${TARGETS} exploit.txt
clean:
	rm -f ${TARGETS} ${OBJECTS} log* exploit.txt
.PHONY: all clean run_exploit
${OBJECTS}: Makefile
CFLAGS=-ggdb
LDFLAGS=${CFLAGS}
CC=gcc

victim: victim.c Makefile
	gcc ${CFLAGS} -m32 -fno-stack-protector -fno-pic -no-pie -o $@ $<

exploit.txt: attacker.py
	python attacker.py

run_exploit: exploit.txt victim
	./victim < exploit.txt
