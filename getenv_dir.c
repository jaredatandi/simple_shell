#include "main.h"
#include <stdio.h>

/**
 * getenv_dir - a function that gets each dir contained in the environment variable PATH, one dir per line
 * @name: the environment variable
 * Return: an array of pointers to the dir
 */

char **getenv_dir(const char *name)
{
        char **value, *delim;

        if (!name || name == NULL)
                return (NULL);

        delim = ":";

        value = _strtok(name, delim); 


        return (value);
}
