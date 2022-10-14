#define _GNU_SOURCE

#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/utsname.h>

extern char **environ;

int main(int argc, char *argv[], char *envp[]) {
    
    for (int i = 0; environ[i]; i++)
        printf("  environ[%d]: %p (%s)\n", i, environ[i], environ[i]);

    if (unsetenv(argv[1]) == 0)
        printf("You have deleted! %s ", argv[1]);
    else
        printf("Error");
    return 0;
}