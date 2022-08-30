#include <stdio.h>

/**
 * main - prints arguments
 *
 * Return: 0 always
 */

int main(int ac, char **argv)
{
	int i = 0;

	if (ac == 1)
		printf("Provide atleast one arg\n");

	for (i = 1; i < ac; i++)
		printf("%s\n", argv[i]);
	return (0);
}
