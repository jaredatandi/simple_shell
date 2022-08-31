#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strtok - slits a string and returns an array
 * of each word of the string
 * @str: command line arguements
 * @delim: the spliting point
 *
 * Return: an array of splitted strings each null
 * terminated
 */

char **_strtok(char *str, char *delim)
{
	char **array, *token, *copy;
	int i, n;
	
	copy = malloc(strlen(str) + 1);

	/* check if mem was allocated */
	if (!copy)
	{
		perror("hsh");
		return (NULL);
	}
	i = 0;

	/* copy the string */
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';

	token = strtok(copy, delim);
	array = malloc((sizeof(char *) * 2));

	i = 0;
	n = 3;
	while (token)
	{
		array = realloc(array, (sizeof(char *) * n));
		array[i] = strdup(token);
		i++;
		n++;
		token = strtok(NULL, delim);
	}

	free(copy);
	return(array);
}
