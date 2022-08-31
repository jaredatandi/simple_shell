#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/**
 * prompt - prints all arguements
 * @ac: arguements count
 * @av: null terminated array of arguements
 *
 * Return: 0 (success)
 *
 * Description: this function will print out the
 * av array passed to it without using ac
 */


int prompt(int ac, char **av)
{
	int i = 0;
	if (ac == 1)
	{
		perror("prompt");
		exit(EXIT_FAILURE);
	}
	/* check if you have reached end of array
	 * print out the value if not
	 * */
	for (i = 0; av[i] != NULL; i++)
		printf("%s\n", av[i]);

	return (0);

}
