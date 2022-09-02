#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - test list
 * Return: a pointer to the created list
 */

DIR_LIST *create_list(void)
{
        DIR_LIST *head;
        char *value, *var, **directories;
        int i = 0;

        head = NULL;

        var = "PATH";
        value = getenv_value(var);
        directories = getenv_dir(value);

        while (directories[i] != NULL)
        {
                head = build_list(&head, directories[i]);
                i++;
        }
        return (head);
}
