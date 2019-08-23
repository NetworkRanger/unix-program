#include "opend.h"
#include <fcntl.h>

void
handle_request(char *buf, int nread, int fd)
{
	int newfd;

	if(buf[nread-1] != 0){
		snprintf(errmsg, MAXLINE-1, "request not null terminated: %*.*s\n", nread, nread, buf);
		send_err(fd, -1, errmsg);
		return;
	}
	if(buf_args(buf, cli_args) < 0){ /* parse args & set options */
		send_err(fd, -1, errmsg);
		return;
	}
	if((newfd = open(pathname, oflag)) < 0){
		snprintf(errmsg, MAXLINE-1, "can't open %s: %s\n", pathname, strerror(errno));
		send_err(fd, -1, errmsg);
		return;
	}
	if(send_fd(fd, newfd) < 0) /* send the descriptor */
		err_sys("send_fd error");
	close(newfd); /* we're done with descriptor */
}

/*
 * This function is called by buf_args(), which is called by
 * handle_request(). buf_args() has broken up the client's
 * buffer into an argv[]-style array, which we now process.
 */
int
cli_args(int argc, char **argv)
{
	if(argc != 3 || strcmp(argv[0], CL_OPEN) != 0){
		strcpy(errmsg, "usage: <pathname> <oflag>\n");
		return(-1);
	}
	pathname = argv[1]; /* save ptr to pathname to open */
	oflag = atoi(argv[2]);
	return(0);
}
