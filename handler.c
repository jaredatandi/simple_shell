#include "main.h"

void check_sig(int sig)
{
	if (sig == SIGINT)
		puts("\n#cisfun$ ");
}

void check_EOF(int n,__attribute__((unused)) char *buf)
{
	if (n == -1)
	{
		if (isatty(STDIN_FILENO))
		{
			puts("\n");
		}
		exit(0);
	}
}

void check_isatty(void)
{
	if (isatty(STDIN_FILENO))
		puts("#cisfun$ ");
}

