#include "main.h"
#include <stdlib.h>

char *get_value(char *var)
{
	int i;

	for (i = 0; var[i] != '='; i++)
		;
	return (var + i + 1);
}

char *get_environ(char **environ, char *var)
{
	int j, k;

	char *name, *value;

	for (j = 0; environ[j]; j++)
	{
		name = malloc(1024);

		for (k = 0; environ[j][k] != '='; k++)
		{
			name[j] = environ[j][k];

			if (name == var)
			{
				value = get_value(environ[j]);
				free(name);
				return (value);
			}
		}
		free(name);
	}
	return (NULL);
}


char **get_path(char **env)
{
	char **res, *find_path, *delim;

	delim = ":";

	find_path = get_environ(env, "PATH");
	res = parse_data(find_path, delim);

	return (res);
}
