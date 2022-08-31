#include <stdio.h>
#include <stdlib.h>

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
	char **array;
	char *token;
	int i, j;

	token = strtok(str, delim);
	array = malloc(sizeof(char *) * 2);
	array[0] = token;

	i = 1;

	while (token)
	{
		array = realloc(array, (sizeof(char *) * 2 * i));
		array[i] = token;
		token = strtok(NULL, delim);
		i++;
	}

	return (array);
}


	

