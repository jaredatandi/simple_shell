#include "main.h"


/**
 * builtin_func - selects a function
 * depending on the inputted string
 * @s: the string
 *
 * Descriptiong: the function loops through the struct array
 * builtin_f[] to determine the right function and pass it to
 * the shell
 *
 * Return: a pointer to the matching function
 */

int (*builtin_func(char s))(char **)
{
	builtin_f[] = {
		{"cd", _cd},
		{"help", _help},
		{"exit", _exit};
	};

	int f = 3;

	register int i;

	for (i = 0; i < f; i++)
		if (builtin_f[i].ch == s)
			return (builtin_f.func);
	return (NULL);
}
