#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * main - getenv code
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 always
 */

int main(__attribute((unused))int argc, char **argv)
{
	char *shell;

	shell = "/usr/bin/ls"; 

	if ((execve(shell, argv, NULL)) == -1)
	{
		perror("hsh:");
		return (-1);
	}

	return (0);
}

