#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

int main(__attribute__((unused))int argc, char **argcp)
{
	int status;
	pid_t child_pid;
	char *argv[] = {"/usr/bin/", NULL};

	printf("Before exec\n");

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("ERRROR:");
		return (1);
	}
	if (child_pid == 0)
	{
		if (execve(argv[0], argcp, NULL) == -1)
		{
			perror("Error:");
		}
	}
	else
	{
		wait(&status);
		printf("waiting now\n");
	}
	printf("After\n");

	return (0);
}
