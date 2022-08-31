#include "main.h"
#include <stdio.h>

/**
 * main - test pid
 *
 * Return: 0 success
 */

int main(void)
{
	pid_t res;

	res = pid();
	printf("my pid is: %u\n", res);

	return (0);
}
