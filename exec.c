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

int _execve(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int status;

	pid_t c_pid;

	c_pid = fork();

	if (c_pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error:");
		}
	}
	else
	{
		wait(&status);
		printf("parent taken over");
	}

	return (0);
}
