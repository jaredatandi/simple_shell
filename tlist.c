#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - test list
 */

int main(void)
{
        DIR_LIST *head, *nwnode;

        head = malloc(sizeof(DIR_LIST));

        head->dir = "Jared";
        head->next = NULL;
        nwnode = build_list(head);

        printf("in main: assigned\n");

        while (nwnode->next)
        {
                printf("%s\n", nwnode->dir);
                nwnode = nwnode->next;
        }

        free(nwnode);
        return (0);
}
