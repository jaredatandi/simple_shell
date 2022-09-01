#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * build_list - builds a linked list of the directories
 * in PATH
 */

DIR_LIST *build_list(DIR_LIST *head, char *d)
{
        DIR_LIST *newnode,*temp;

        temp = malloc(sizeof(DIR_LIST *));
        newnode = malloc(sizeof(DIR_LIST *));
        if (!newnode)
        {
                perror("hsh");
                return (NULL);
        }

        if (head == NULL)
        {

                head = temp = newnode;
                newnode->dir = d;
                newnode->next = NULL;

                return (head);
        }
        else
        {
                newnode->dir = d;
                newnode->next = NULL;
                temp->next = newnode;
                temp = newnode;

                return (head);
        }
        return (NULL);
}
