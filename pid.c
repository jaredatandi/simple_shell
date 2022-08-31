#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * pid - gets the pid of a process
 *
 * Return: pid of the process
 */

pid_t pid(void)
{
	pid_t my_pid;

	my_pid = getpid();

	return (my_pid);
}
