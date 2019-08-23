#include "apue.h"
#include <termios.h>

int
main(void)
{
	struct termios term;

	if(tcgetattr(STDIN_FILENO, &term) < 0)
		err_sys("tcgetattr error");
	
	switch(term.c_cflag & CSIZE){
	case CS5:
		printf("5 bits/bytes\n");
		break;
	case CS6:
		printf("6 bits/bytes\n");
		break;
	case CS7:
		printf("7 bits/bytes\n");
		break;
	case CS8:
		printf("8 bits/bytes\n");
		break;
	default:
		printf("unknown bits/bytes\n");
	}

	term.c_cflag &= ~CSIZE; /* zero out the bits */
	term.c_cflag |= CS8; /* set 8 bits/byte */
	if(tcsetattr(STDIN_FILENO, TCSANOW, &term) < 0)
		err_sys("tcsetattr error");
	
	exit(0);
}
