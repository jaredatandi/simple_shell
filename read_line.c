#include "main.h"
#include <stdlib.h>

#define SIZE 1024

/**
 * read_line - a function to take in inputs
 * Return: a pointer to the string
 */

char *read_line(void)
{
	int cursor = 0, bufsize, ch, i = 1;
	char *buff = NULL;

	bufsize = SIZE;
	buff = malloc(sizeof(char) * bufsize);

	if (!buff)
	{
		perror("hsh: mem allocation error\n");
		exit(EXIT_FAILURE);
	}

	while (i)
	{
		ch = getchar();

		if (ch == EOF)
			i = 0;
		if (ch == '\n')
		{
			buff[cursor] = '\0';
			return (buff);
		}
		buff[cursor] = ch;
		cursor++;

		if (cursor >= bufsize)
		{
			bufsize += SIZE;
			buff = realloc(buff, bufsize);

			if (!buff)
			{
				perror("hsh: mem allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
	}
	free(buff);
	return (NULL);
}
