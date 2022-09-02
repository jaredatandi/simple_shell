#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - test list
 */

int create_list(void)
{
        DIR_LIST *head, *nwnode;
        char *value, *var, **directories;
        int i = 0;

        head = NULL;

        head = (DIR_LIST *)malloc(sizeof(DIR_LIST));
        if (!head)
        {
                perror("hsh");
                return (-1);
        }

        var = "PATH";
        value = getenv_value(var);
        directories = getenv_dir(value);
        nwnode = (DIR_LIST *)malloc(sizeof(DIR_LIST));

        while (directories[i] != NULL)
        {
                nwnode = build_list(head, directories[i]);
                i++;
        }

        head = nwnode;

        free(head);
        return (0);
}
