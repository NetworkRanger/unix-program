NAME = $(notdir $(shell echo `pwd`))
CC=gcc
CFLAGS=-ansi -Wall -DLINUX -D_GNU_SOURCE
INCLUDE=
LDDIR=
LDLIBS=$(LDDIR)

all: $(NAME)

%: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -o $@.o $@.c -c 

clean:
	rm -rf $(NAME)  *.o
