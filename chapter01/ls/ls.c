#include "apue.h"
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

void err_quit(const char *, ...) __atrribute__((noreturn));

int
main(int argc, char *argv[])
{
    DIR *dp;
    struct dirent *dirp;

    if (argc != 2)
        err_quit("usage: ls dirctory_name");

    while ((dirp = readdir(dp)) != NULL)
        printf("%s\n", dirp->d_name);

    closedir(dp);
    exit(0);
}
