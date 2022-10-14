#include <stdio.h>
#include <stdlib.h>

extern char ** environ;

int main (int argc, char* argv[]) {
	if (argc < 2) {
		char * var_1 = getenv (argv[0]);
		printf ("'%s=%s'  We are found\n", argv[0], var_1);
		return 0;
	}
	char * var = getenv (argv[1]);
	if (var == NULL) {
		printf ("'%s'  Sorry we could not find!\n", argv[1]);
		exit (0);
	}
	printf ("'%s=%s'  We are found\n", argv[1], var);
	return 0;
}
