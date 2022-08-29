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
		printf("$ ");

		line = read_line();
		argv = parse_data(line);
		status = launch(argv);
		func = builtin_func(line);
		func(argv);
		printf("%s\n", line);

		free(line);
		free(argv);

	} while (status);
}
