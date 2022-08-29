#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define size 1024

/**
 * print_dir - prints the current directory
 */

void print_dir(void)
{
	char dir[size];

	getcwd(dir, sizeof(dir));
	printf("%s\n", dir);
}
