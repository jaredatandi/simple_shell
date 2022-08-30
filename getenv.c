#include <stdio.h>
#include <stdlib.h>

/**
 * main - getenv code
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	printf("Accessign environment\n");
	printf("  USER=%s\n", getenv("USER"));
	printf("  UNDEFINED=%s\n", getenv("UNDEFINED"));
	printf("  TERM=%s\n", getenv("TERM"));

	return (0);
}

