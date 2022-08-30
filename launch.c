#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * launch - executes the builtin commands
 * @argv: array of arguments
 *
 * Return: 1 if successfull
 */

int main(__attribute__((unused))int argc, char **argv, char **env)
{
	pid_t c_pid;
	int wstatus;

	c_pid = fork();

	if (c_pid == -1)
	{
		perror("hsh: fork failed ");
		exit(EXIT_FAILURE);
	}
	else if (c_pid == 0)
	{
		if (execve(argv[0],argv, env) == -1)
		{
			perror("hsh execve failed");
			exit(EXIT_FAILURE);
		}
	}
	else
		wait(&wstatus);
	return (0);
}
