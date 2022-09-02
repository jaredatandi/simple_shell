#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>

/**
 * _which - traces the pathname of a file in the
 * PATH directories
 * @head: head pointer to the linked list of the PATH
 * directories
 *
 * Return: file pathname or NULL
 */

char *_which(char *name, DIR_LIST *head)
{
        char *value, *var, **directories, *str, *pstr;
        struct stat st;
        int i = 0;

        DIR_LIST *temp = head;

        var = "PATH";
        value = getenv_value(var);
        directories = getenv_dir(value);

        while (temp)
        {
                pstr = strcat(directories[i], "/");
                str = strcat(pstr, name);

                if (stat(str, &st) == 0)
                {
                        return (str);
                }
                temp = temp->next;
                i++;
        }

        return (NULL);
}
