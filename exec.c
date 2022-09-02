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
        execvp (argv[0], argv);
        perror(argv[0]);

	return (0);
}
