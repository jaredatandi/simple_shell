#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints "$ " and wait for the user to enter
 * a command, prints it in the next line
 *
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: 0 sucess
 */
int main(int ac, __attribute__((unused))char **av)
{
	char *line = NULL;
	ssize_t len = 0;
	size_t n = 0;

	if (ac < 2)
	{
		perror("getline");
		return (-1);
	}

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
