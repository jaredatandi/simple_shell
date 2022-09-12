#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>

/**
 * main - prints all arguments
 * @argc: arguments count
 * @argv: null terminated array of arguments
 *
 * Return: 0 (success)
 *
 * Description: this function will print out the
 * av array passed to it without using ac
 */



int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 1)
	{
		_getline();
	}
	else
	{
		while (argv[i] != NULL)
		{
			argv[i] = argv[i + 1];
			i++;
		}
		/*
		argv[i] = '\0';
		*/
		if (execvp(argv[0], argv) == -1)/* check for errors */
		{
			perror("hsh");
			fflush(stdout);
			exit(0);
			return (-1);
		}
		
	}
	return (0);
}
