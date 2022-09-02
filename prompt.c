#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/**
 * prompt - prints all arguments
 * @ac: arguments count
 * @av: null terminated array of arguments
 *
 * Return: 0 (success)
 *
 * Description: this function will print out the
 * av array passed to it without using ac
 */

char **dirs(char *name)
{
        char **dirs, *value;
        value = getenv_value(name);
        dirs = getenv_dir(value);

        return (dirs);
}

int main(int argc, char **argv)
{

        char **dir_arr, *name, *path, **var;
        name = "PATH";
        dir_arr = dirs(name);

        if (!(argc == 1))
        {
                var = parse_line(argv[1]);
                path = strcat(dir_arr[0], var[0]);
                execve(path, argv, environ);
        }
        else
                _getline();
        return (0);
}
