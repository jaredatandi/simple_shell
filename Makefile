#!/bin/bash

# compiler
CC=gcc

# compiler options
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89

.PHONY: all clean

all: 
	$(CC) $(CFLAGS) *.c -o hsh 

clean:
	/bin/rm -f *.out *.o hsh 
