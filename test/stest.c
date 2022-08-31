#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - test _strtok
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	char *delim, *name, **arr;
	int i;

	delim = " \t\a\n\b";
	name = "Jared Atandi Keago      tabher 			tab2   next \a abell \b";
	arr = _strtok(name, delim);

	for (i = 0; arr[i] != NULL; i++)
		printf("%s\n", arr[i]);
	
	return (0);
}
