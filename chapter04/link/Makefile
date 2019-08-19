NAME = link
CC=gcc
CFLAGS=-ansi -Wall -DLINUX -D_GNU_SOURCE
INCLUDE=-I../../include
LDDIR=-L../../lib
LDLIBS=$(LDDIR) -lapue

all: $(NAME)

%: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -o $@.o $@.c $(LDLIBS) -c 
	$(CC) $(CFLAGS) -o $@ $@.o  $(LDLIBS)

clean:
	rm -rf $(NAME) *.o
