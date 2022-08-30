#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - getenv code
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 always
 */

int main(void)
{
	char *shell;
	char *argv[] = {"ls", NULL};
	shell = "/usr/bin/pwd"; 

	if ((execve(shell, argv, NULL)) == -1)
	{
		perror("hsh:");
		return (-1);
	}

	printf("Accessign environment\n");
	printf("  USER=%s\n", getenv("USER"));
	printf("  UNDEFINED=%s\n", getenv("UNDEFINED"));
	printf("  TERM=%s\n", getenv("TERM"));

	return (0);
}

