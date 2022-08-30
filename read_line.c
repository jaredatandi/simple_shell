#include "main.h"
#include <stdlib.h>

#define SIZE 1024

/**
 * read_line - a function to take in inputs
 * Return: a pointer to the string
 */

char *read_line(void)
{
	char *line = NULL;
	int unparsed_len = 0;
	size_t size = 0;

	if (getline(&line, &size, stdin) == -1)
	{
		free(line);
		exit(-1);
	}

	unparsed_len = strlen(line);
	line[unparsed_len - 1] = '\0';

	return (line);
}
