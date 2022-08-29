#include "main.h"
#include <stdlib.h>

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

int main(int argc, char **args)
{
	if (argc == 1)
		show_prompt();
	else
		launch(args);

	return (0);
}
