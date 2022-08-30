#include "main.h"
#include <stdlib.h>

/**
 * launch - executes the builtin commands
 * @argv: array of arguments
 *
 * Return: 1 if successfull
 */

int launch(char **argv)
{
	pid_t c_pid;
	int status;

	if (strncmp("exit", argv[0], 4) == 0)
		hsh_exit(argv);
	c_pid = fork();

	if (c_pid == -1)
	{
		perror("hsh");
		exit(EXIT_FAILURE);
	}
	else if (c_pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("hsh");
			exit(EXIT_FAILURE);
		}
	}
	else
		wait(&status);
	return (0);
}
