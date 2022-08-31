#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/**
 * prompt - prints all arguements
 * @ac: arguements count
 * @av: null terminated array of arguements
 *
 * Return: 0 (success)
 *
 * Description: this function will print out the
 * av array passed to it without using ac
 */


int prompt(int ac, char **av)
{
	if (ac == 1)
	{
		_getline();
	}
	/* check if you have reached end of array
	 * print out the value if not
	 * */
	else
		_execve(av);

	return (0);

}
int main(int argc, char **argv)
{
	prompt(argc, argv);

	return (0);
}
