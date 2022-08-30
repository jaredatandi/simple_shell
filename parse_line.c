#include "main.h"
#include <stdlib.h>

#define BUFFSIZE 1024

/**
 * parse_data - parse the inputted line
 * @line: the arguments from the shell
 * Return: a pointer to array of strings
 */

char **parse_data(char *line, char *delim)
{
	char **tokens, *token;
	int cursor = 0;
	int buffsize = BUFFSIZE;

	tokens = malloc(sizeof(char *) * buffsize);

	if (!tokens)
	{
		fprintf(stderr, "hsh: mem allocation error\n");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, delim);

	while (token != NULL)
	{
		tokens[cursor] = token;
		cursor++;

		if (cursor >= buffsize)
		{
			buffsize += BUFFSIZE;
			tokens = realloc(tokens, buffsize * sizeof(char
						*));
			if (!tokens)
			{
				fprintf(stderr, "hsh: mem allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, delim);
	}
	tokens[cursor] = NULL;

	return (tokens);
}
