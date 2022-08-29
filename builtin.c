#include "main.h"

/**
 * hsh_num - calculates the number of commands
 * Return: number of total commands
 */

int hsh_num(void)
{
	return (sizeof(builtin_f) / sizeof(char *));
}

/**
 * hsh_cd - changes directory
 * @argv: the commanline arguments
 * Return: 1 if success
 */

int hsh_cd(char **argv)
{
	if (argv[1] == NULL)
		printf("hsh: usage cd <arguement>\n");
	else
	{
		if (chdir(argv[1]) != 0)
		{
			perror("hsh");
		}
		print_dir();
	}
	return (1);
}

/**
 * hsh_help - gives help info
 * @argv: the commanline arguments
 * Return: 1 if success
 */

int hsh_help(__attribute__((unused))char **argv)
{
	printf("Simple shell\n");
	printf("Type a program name and hit enter\n");

	return (1);
}

/**
 * hsh_exit - exits the shell
 * @argv: the commanline arguments
 * Return: 0 success
 */

int hsh_exit(__attribute__((unused))char **argv)
{
	return (0);
}

