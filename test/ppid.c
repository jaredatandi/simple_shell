#include <stdio.h>
#include <unistd.h>

/**
 * main - ppid
 *
 * Return: 0 always
 */

int main(void)
{
	pid_t p_pid, c_pid;

	c_pid = fork();

	if (c_pid == -10)
	{
		perror("Error:");
		return (1);
	}

	p_pid = getpid();
	printf("My pid is %u\n", p_pid);
	if (c_pid == 0)
	{
		printf("(%u) NOOOOOOOOooooo\n", p_pid);
	}
	else
		printf("(%u) %u, I am your father\n", p_pid, c_pid);

	return (0);
}
