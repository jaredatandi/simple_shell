#include <stdio.h>

#include <sys/syscall.h>
#include <unistd.h>

#include <asm/unistd.h>

/**
 * main - getpid working
 *
 * Return: 0 always
 */
void function(void)
{
	int pid;

	pid = syscall(__NR_getpid);
	printf("%d\n", pid);
}

int main(void)
{
	function();

	return (0);
}
