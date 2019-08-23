#include "apue.h"
#include <termios.h>

int
isatty(int fd)
{
	struct termios ts;

	return(tcgetattr(fd, &ts) != -1); /* true if no error (is a tty) */
}

int
main(void)
{
	printf("fd 0: %s\n", isatty(0) ? "tty" : "not a tty");
	printf("fd 1: %s\n", isatty(1) ? "tty" : "not a tty");
	printf("fd 2: %s\n", isatty(2) ? "tty" : "not a tty");
	exit(0);
}
