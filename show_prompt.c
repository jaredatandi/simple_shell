#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define ARG_MAX 4194304

/**
 * show_prompt - driver code for the simple shell
 *
 */

void show_prompt(void)
{
	char *line, **argv;
	int status;
	int (*func)(char **);

	do {
		printf("\033[H\033[J");
		printf("$ ");

		line = read_line();
		argv = parse_data(line);
		func = builtin_func(line);
		if (func == 0)
			status = 1;
		else
			status = func(argv);

		free(line);
		free(argv);

	} while (status);
}
