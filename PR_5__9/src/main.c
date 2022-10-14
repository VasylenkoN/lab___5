#define _GNU_SOURCE

#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/utsname.h>


int main() {
    printf("\nInfo about computer:\n");
    int id = gethostid();
    printf("\t\tID: %d\n", id);
    struct utsname utsbuf;

    if (uname(&utsbuf) != 0) {
        printf("Error. Something is wrong");
        return 1;
    }
    printf("\t\tSystem name: %s\n", utsbuf.sysname);
    printf("\t\tComputer name: %s\n", utsbuf.nodename);
    printf("\t\tRelease version: %s\n", utsbuf.release);
    printf("\t\tSystem version: %s\n", utsbuf.version);
    printf("\t\tMachine: %s\n\n", utsbuf.machine);
}