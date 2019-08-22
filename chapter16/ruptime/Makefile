NAME = $(notdir $(shell echo `pwd`))
CC=cc
CFLAGS=-ansi -Wall -DLINUX -D_GNU_SOURCE
INCLUDE=-I../../include
LDDIR=-L../../lib
LDLIBS=$(LDDIR) -lapue

$(NAME): ruptime.o connect_retry.o
	$(CC) $(CFLAGS) -o $(NAME) $? $(LDLIBS)

%.o:%.c
	$(CC) $(CFLAGS) $(INCLUDE) -o $@ $< -c 

clean:
	rm -rf $(NAME)  *.o
