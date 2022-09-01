#include "main.h"
#include <stdio.h>

/**
 * main - test getenv_dir function
 * Return: 0 on success
 */

int main()
{
        const char *variable;
        char **directories;
        char *name = "PATH";
        int i = 0;

        variable = getenv_value(name);
        
        if (variable == NULL)
        {
                printf("No such directory\n");
                return (-1);
        }

        directories = getenv_dir(variable);
        

        for (i = 0; directories[i] != NULL; i++)
                printf("%s\n", directories[i]);

        return (0);
}

