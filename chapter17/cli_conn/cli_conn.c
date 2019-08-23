#include "apue.h"
#include <sys/socket.h>
#include <sys/un.h>
#include <errno.h>

#define CLI_PATH "/var/tmp/"
#define CLI_PERM S_IRWXU /* rwx for user only */

/*
 * Create a client endpoint and connect to a server.
 * Returns fd if all OK, <0 on error.
 */
int
cli_conn(const char *name)
{
	int fd, len, err, rval;
	struct sockaddr_un un, sun;
	int do_unlink = 0;

	if(strlen(name) >= sizeof(un.sun_path)){
		errno = ENAMETOOLONG;
		return(-1);
	}

	/* create a UNIX domain stream socket */
	if((fd = socket(AF_UNIX, SOCK_STREAM, 0)) < 0)
		return(-1);
	
	/* fill socket address structure with our address */
	memset(&un, 0, sizeof(un));
	un.sun_family = AF_UNIX;
	strcpy(sun.sun_path, name);
	len = offsetof(struct sockaddr_un, sun_path) + strlen(name);
	if(connect(fd, (struct sockaddr *)&sun, len) < 0){
		rval = -4;
		do_unlink = 1;
		goto errout;
	}
	return(fd);

errout:
	err = errno;
	close(fd);
	if(do_unlink)
		unlink(un.sun_path);
	errno = err;
	return(rval);
}
