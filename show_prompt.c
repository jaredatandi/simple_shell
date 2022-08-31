#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>


/**
 * show_prompt - driver code for the simple shell
 *
 */

int main(__attribute__((unused))int args, __attribute__((unused))char **arr, char **env)
{
	char *line = NULL, *val, *pname, **tokns;
	ssize_t len = 0;
	size_t size = 0;


	signal(SIGINT, check_sig);

	while (len != EOF)
	{
		check_isatty();

		len = getline(&line, &size, stdin);

		tokns = parse_data(line, " \n");
		if (!tokns || !tokns[0])
			exec_args(tokns);

		else
		{
			val = get_environ(env, "PATH");
			pname = create_path(val, tokns);

			if (!pname)
				exec_args(tokns);
			else if (pname)
			{
				free(tokns[0]);
				tokns[0] = pname;
				exec_args(tokns);
			}
		}

		/*
		if (line == NULL)
		{
			printf("\n");
			break;
		}
		argv = parse_data(line, del);
		cmd = create_path(argv, tokns);

		if (cmd == NULL)
			exec_args(argv);
		*/

	}
	return (0);
}
