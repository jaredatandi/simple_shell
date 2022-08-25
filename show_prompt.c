#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define ARG_MAX 4194304

/**
 * show_prompt - driver code for the simple shell
 *
 * Return: number of printed characters
 */

int show_prompt(void)
{
	char *buff;
	int nread;
	size_t buffsize = ARG_MAX;


	buff = malloc(sizeof(char) * buffsize);

	if (buff == NULL)
	{
		perror("failed to read input");
		exit(EXIT_FAILURE);
	}

	printf("$ ");

	nread = getline(&buff, &buffsize, stdin);
	if (nread == -1)
	{
		perror("error reading line\n");
		free(buff);
		return (-1);
	}

	free(buff);

	return (nread);
}
