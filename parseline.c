#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFSIZE 1024

/**
 * parse_line - parse the input
 * @line: the inputted line
 *
 * Return: an array vector
 */

char **parse_line(char *line)
{
	char *res, **av;
	unsigned long int n;
	int size = BUFFSIZE;

	av = malloc(sizeof(char *) * size);

	res = strtok(line, " \t\r\n");
	for (n = 0; res; n++)
	{
		if (sizeof(av) > n)
		{
			av = malloc(sizeof(char *) * size);
			av = realloc(av, size);
		}
		av[n] = res;
		res = strtok(NULL, " \t\r\n");
	}
	return (av);
}


