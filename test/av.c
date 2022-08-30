#include <stdio.h>

/**
 * main - av
 *
 * Return: 0 always
 */

int main(__attribute__((unused))int ac, char **av)
{
	int i = 1;

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}

	return (0);
}
