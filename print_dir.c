#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define size 1024

/**
 * print_dir - prints the current directory
 */

int print_dir(__attribute__((unused))char **args)
{
	char dir[size];

	getcwd(dir, sizeof(dir));
	printf("%s\n", dir);

	return (1);
}
