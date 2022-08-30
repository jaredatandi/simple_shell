#include <stdio.h>
#include <stdlib.h>

#define _GNU_SOURCE

/**
 * main - prints "$ " and waits for the user to enter command
 * @argc: argument count
 * @argv: null terminated array string of arguments
 *
 * Return: 0 always
 */

int main(void)
{
	char *line = NULL;
	size_t size = 0;
	int chars, i;

	printf("start");
	while ((chars = getline(&line, &size, stdin)) != -1)
	{
		printf("Retrieved line of length %d:\n", chars);
		for (i = 0; i < (chars -1); i++)
		{
			putchar(line[i]);
		}
	}

	free(line);
	return (0);
}
