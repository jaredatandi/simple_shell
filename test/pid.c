#include <stdio.h>
#include <unistd.h>

/**
 * main - pid
 *
 * Return: 0 always
 */

int main(void)
{
	pid_t my_pid;

	my_pid = getpid();

	printf("my pid is: %u\n", my_pid);

	return (0);
}
