#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define ARG_MAX 4194304

/**
 * show_prompt - driver code for the simple shell
 *
 */

void show_prompt(char **argv, char **env)
{
	char *line, *delim, *cmd;
	int status = 1;
	int (*func)(char **);

	delim = " \t\a\n\b";

	printf("\033[H\033[J");
	do {
		printf("$ ");

		line = read_line();
		if (line == NULL)
		{
			printf("\n");
			break;
		}
		argv = parse_data(line, delim);
		/*
		func = builtin_func(line);
		if (func == 0)
			status = 1;
		else
			status = func(argv);
			*/
		cmd = 


		free(line);
		free(argv);

	} while (status);
}
