#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * getenv_value - gets environment without using getenv
 * @name: the name of the environment
 *
 * Return: a pointer to the environment
 */

char *getenv_value(const char *name)
{
	int i = 0;
	int j = 0;
	char *buf;



	while (environ[i] != NULL)
	{
	j = 0;

	while (name[j])
	{
	if (name[j] != environ[i][j])
	break;
	j++;
	}

	if (name[j] == '\0')
	{
	buf = (environ[i] + j + 1);
	return (buf);
	}
	i++;
	}

	return (NULL);
}

