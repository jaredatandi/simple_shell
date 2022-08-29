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
	char *cmd = "/bin/bash";
	char **args = argv;
	char **env = NULL;

	if ((execve(cmd, args, env) == -1))
		perror("hsh\n");
	perror("something went wrong\n");

	return (1);
}
