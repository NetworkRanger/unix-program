NAME = ls
OBJS = $(NAME).o
CC=gcc

$(NAME): $(OBJS)
	gcc -ansi -I../../include -Wall -DLINUX -D_GNU_SOURCE ls.c -o ls -L../../lib -lapue

clean:
	rm -rf *.o
