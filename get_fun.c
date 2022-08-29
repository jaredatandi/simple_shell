#include "main.h"
#include <stdlib.h>


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

int (*builtin_func(char *s))(char **)
{
	/* store all the functions */
	builtin_f func_array[] = {
		{"cd", hsh_cd},
		{"help", hsh_help},
		{"exit", hsh_exit},
		{"clear", hsh_clear},
		{"pwd", print_dir}
	};

	int f = 5;

	register int i;

	/* check if the input is a valid string */
	if (!s)
		return (NULL);

	for (i = 0; i < f; i++)
	{
		/* check if the command matches a function */
		if ((strcmp(func_array[i].ch, s)) == 0)
			return (func_array[i].func);
	}
	printf("%s: command not found\n", s);
	return (0);
}
