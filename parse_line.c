#include "main.h"
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 1024

/**
 * parse_data - parse the inputted line
 * @line: the arguments from the shell
 * Return: a pointer to array of strings
 */

char **parse_data(char *line, char *delim)
{
	char **pptoken;
	int buf = 1024, i = 0;

	pptoken = malloc(sizeof(char *) * buf);
	if (!pptoken)
		exit(99);

	pptoken[i] = strtok(line, delim);
	i++;
	while (1)
	{
		pptoken[i] = strtok(NULL, delim);
		if (i >= buf)
		{
			buf += buf;
			pptoken = realloc(pptoken, (sizeof(char *) * buf));
			if (!pptoken)
				exit(98);
		}
		if (pptoken[i] == NULL)
			break;
		i++;
	}
	return (pptoken);
}
int main(void)
{
	char *test = "jared/keago:atandi";
	char *delim = "/";
	char **arr;
	int i;

	printf("here");
	arr = parse_data(test, delim);

	for (i = 0; i < 3; i++)
		printf("%s\n", arr[i]);

	return (0);
}
