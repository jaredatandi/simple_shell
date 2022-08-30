#include "main.h"
#include <stdlib.h>
#include <signal.h>

#define ARG_MAX 1024
#define COMMANDS_MAX 64

/**
 * main - driver code
 * @argc: argument count
 * @args: a vector of the arguments
 *
 *
 * Return: 0 always
 */

int main(__attribute__((unused))int argc, char **argv, char **env)
{
	signal(SIGINT, SIG_IGN);
	show_prompt(argv, env);

	return (0);
}
