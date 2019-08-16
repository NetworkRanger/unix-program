#include "apue.h"

int
main(void){
	printf("uid = %d, gid=%d\n", getuid(), getpid());
	exit(0);
}
