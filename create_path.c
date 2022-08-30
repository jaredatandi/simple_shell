#include "main.h"
#include <stdlib.h>
#include <sys/stat.h>

char *create_path(char **args, char **token)
{
	int i, j, k;
	char **cat, *total;
	struct stat status;

	for (i = 0; token[i]; i++)
	{
		total = malloc(60);
		strcat(total, token[i]);
		strcat(total, "/");
		strcat(total, args[0]);

		if (stat(total, &status) == 0)
		{
			for (k = 0; args[k] != NULL; k++)
				cat = malloc(sizeof(char *) * (k + 1));
			cat[k] = NULL;
			cat[0] = strdup(total);

			for (j = 1; args[j]; j++)
				cat[j] = strdup(args[j]);
			exec_args(cat);

			return (total);
		}
		free(total);
	}
	return (NULL);
}
