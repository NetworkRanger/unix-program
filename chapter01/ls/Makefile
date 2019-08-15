NAME = ls
OBJS = $(NAME).o
CC=gcc

$(NAME): $(OBJS)
	ld $(OBJS)

ls.o:
	$(CC) -W -I../../include -o ls.o ls.c

clean:
	rm -rf *.o
