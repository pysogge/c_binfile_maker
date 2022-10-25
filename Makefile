# Makefile for binmaker

SRCDIR = src
BINDIR = bin
OUTDIR = out

CC = gcc
CFLAGS = -Wall -O2

.PHONY: all clean

all: prep binmaker

prep:
	$(shell mkdir -p $(OUTDIR) 2>/dev/null)
	$(shell mkdir -p $(BINDIR) 2>/dev/null)

binmaker: $(SRCDIR)/binmaker.c
	$(CC) $(CFLAGS) -o $(BINDIR)/binmaker $(SRCDIR)/binmaker.c
	./$(BINDIR)/binmaker

clean:
	rm -f ./$(BINDIR)/*
	rm -f ./$(OUTDIR)/*