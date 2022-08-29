#include "main.h"

/**
 * hsh_clear - clears the screen
 * @argv: a list of arguements
 *
 * Return: 0 if success
 */
int hsh_clear(__attribute__((unused))char **argv)
{
	/** move cursor to top left corner */
	printf("\033[H\033[J");

	return (1);
}

