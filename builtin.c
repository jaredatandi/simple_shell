#include "main.h"

/**
 * _num - calculates the number of commands
 * Return: number of total commands
 */

int _num(void)
{
	return (sizeof(builtin_cmd) / sizeof(char *));
}

/**
 * _cd - changes directory
 * @argv: the commanline arguments
 * Return: 1 if success
 */

int _cd(char **argv)
{
	if (argv[1] == NULL)
		printf("hsh: usage cd <arguement>\n");
	else
	{
		if (chdir(argv[1]) != 0)
			perror("hsh");
	}

	return (1);
}

/**
 * _help - gives help info
 * @argv: the commanline arguments
 * Return: 1 if success
 */

int _help(char **argv)
{
	int i = 1;

	printf("Simple shell\n");
	printf("Type a program name and hit enter\n");

	return (i);
}

/**
 * _exit - exits the shell
 * @argv: the commanline arguments
 * Return: 0 success
 */

int _exit(char **argv)
{
	return (0);
}

