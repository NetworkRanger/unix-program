NAME = ls
OBJS = $(NAME).o

$(NAME): $(OBJS)
    ld $(OBJS)

ls.o:
    cc -I../../include $<

clean:
    rm -rf *.o