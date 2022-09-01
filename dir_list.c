#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * build_list - builds a linked list of the directories
 * in PATH
 */

DIR_LIST *build_list(DIR_LIST *head)
{
        DIR_LIST *newnode;

        if (!head->dir)
        {
                perror("hsh");
                return (NULL);
        }

        if (head->next == NULL)
        {

                newnode = malloc(sizeof(DIR_LIST));

                if (!newnode)
                {
                        perror("hsh");
                        free(newnode);
                        return (NULL);
                }

                newnode->dir = head->dir;
                newnode->next = NULL;
                head->next = newnode;
        }
        else
        {

                DIR_LIST *temp, *node;

                node = malloc(sizeof(DIR_LIST));
                
                if (!node)
                {
                        perror("hsh");
                        free(node);
                        return (NULL);
                }
                temp = head;
                while (temp->next != NULL)
                        temp = temp->next;

                node->dir = head->dir;
                node->next = NULL;
                temp->next = node;
        }
        

        return (head);
}
