#include "main.h"

/**
 * create_args - convert parsed line to an
 * array starting at the second element
 * @pline: parsed line
 * Return: an array of arrays
 */

char **create_args(char **pline)
{
	int i = 0, len = 0;
	char **args = NULL;

	while (pline[len] != NULL)
		len++;

	if (len < 2)
		return (NULL);

	while (pline[i] != NULL)
	{
		args[i] = pline[i + 1];
		i++;
	}

	return (args);
}
