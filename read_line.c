#include "main.h"
#include <stdlib.h>

#define SIZE 1024

char *read_line(void)
{
	int cursor = 0, bufsize, ch;
	char *buff;

	bufsize = SIZE;
	buff = malloc(sizeof(char) * bufsize);

	if (!buff)
	{
		perror("hsh: mem allocation error\n");
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		ch = getchar();

		if (ch == EOF || ch == '\n')
		{
			buff[cursor] = '\0';
			return (buff);
		}
		else
		{
			buff[cursor] = ch;
		}
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
}
