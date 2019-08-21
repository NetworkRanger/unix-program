NAME = $(notdir $(shell echo `pwd`))
CC=cc
CFLAGS=-ansi -Wall -DLINUX -D_GNU_SOURCE
INCLUDE=
LDDIR=
LDLIBS=$(LDDIR) -lpthread

all: $(NAME)

%: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -o $@.o $@.c -c 

clean:
	rm -rf $(NAME)  *.o
