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
	pid_t pid;
	int status;

	pid = fork();

	/* check if pid is of child */
	if (pid == 0)
	{
		if (execvp(argv[0], argv) == -1)
		{
			perror("hsh");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
		perror("hsh");
	do {
		pid = waitpid(pid, &status, WUNTRACED);
	} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	return (1);
}
