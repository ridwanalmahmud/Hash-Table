CC=gcc
ICDIRS=-I
OPT=-O1
CFLAGS=-Wall -Wextra -g $(INCDIRS) $(OPT) -lm

CFILES=src/main.c src/hash.c src/prime.c
BINARY=bin/hash

all: $(BINARY)

$(BINARY):
	$(CC) $(CFLAGS) $(CFILES) -o $@

run:
	$(BINARY)

clean:
	rm -f $(BINARY)
