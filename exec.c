#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * _execute - executes another program
 * @arg: the argv[0] in std execve
 * Return: 0 on success and -1 if fail
 */

int _execve(char **argv)
{
	int status;
	char **arv;
	pid_t c_pid;

	arv = _strtok(argv[1], "\n");

	c_pid = fork();
	if (c_pid < 0)
	{
		printf("Error: could not fork");
		return (-1);
	}

	if (c_pid == 0)
	{
		if (execve(arv[0], arv, environ) == -1)
		{
			perror("Error:");
		}
	}
	else
	{
		wait(&status);
		return (-1);
	}

	return (0);
}
