#!/bin/bash

CC=gcc

CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89

.PHONY: clean hsh

all:
	$(CC) $(CFLAGS) *.c -o hsh

clean:
	rm -rf *.out *.o hsh

