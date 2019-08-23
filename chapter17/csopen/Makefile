NAME = $(notdir $(shell echo `pwd`))
CC=cc
CFLAGS=-ansi -Wall -DLINUX -D_GNU_SOURCE
INCLUDE=-I../../include
LDDIR=-L../../lib
LDLIBS=$(LDDIR) -lapue

$(NAME): csopen.o open.o 
	$(CC) $(CFLAGS) -o $@ $?  $(LDLIBS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -o $@ $< -c 

clean:
	rm -rf $(NAME)  *.o
