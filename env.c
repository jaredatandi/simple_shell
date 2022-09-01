#include <stdio.h>
#include "main.h"

extern char **environ;

/**
 * _printenv - prints environment using global
 * variable environ
 */

void _printenv(void)
{
        int i = 0;

        while (environ[i] != NULL)
        {
                printf("%s\n", environ[i]);
                i++;
        }
}
