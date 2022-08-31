#include <stdio.h>
#include <stdlib.h>

/**
 * getline - prints "$ " and wait for the user to enter
 * a command, prints it in the next line
 *
 * @ac: arguments count
 *
 * Return: 0 sucess
 */
int getline(void)
{
	char *line = NULL;
	ssize_t len = 0;
	size_t n = 0;


	printf("$ ");

	/* getline will allocate memory and size according to need */
	while ((len = getline(&line, &n, stdin) != -1))
	{
		printf("%s", line);
	}
	
	/* check if getline returned successfully */
	if (len == -1)
		printf("ERROR!\n");

	return (0);
}
