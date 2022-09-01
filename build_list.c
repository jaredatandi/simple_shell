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

        head = malloc(sizeof(DIR_LIST));
        if (!head)
        {
                perror("hsh");
                return (-1);
        }

        var = "PATH";
        value = getenv_value(var);
        directories = getenv_dir(value);
        nwnode = malloc(sizeof(DIR_LIST));

        while (directories[i] != NULL)
        {
                head->dir = directories[i];
                head->next = NULL;
                nwnode = build_list(head);
                i++;
        }

        printf("in main: assigned\n");

        while (nwnode->next)
        {
                nwnode = nwnode->next;
                printf("%s\n", nwnode->dir);
        }

        free(nwnode);
        return (0);
}
