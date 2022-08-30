#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

#define ARG_MAX 4194304

/**
 * show_prompt - driver code for the simple shell
 *
 */

void show_prompt(char **argv, char **env)
{
	char *line, *delim, *cmd, **tokns;
	int status = 1;

	printf("here");
	delim = " \t\a\n\b";
	signal(SIGINT, SIG_IGN);

	printf("\033[H\033[J");
	tokns = get_path(env);
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
		cmd = create_path(argv, tokns);

		if (cmd == NULL)
			exec_args(argv);

		free(line);
		free(argv);
		free(cmd);

	} while (status);
}
