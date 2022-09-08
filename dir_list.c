#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * build_list - builds a linked list of the directories
 * @head: pointer to the list
 * @d: the directories
 * Return: pointer to the built list
 * in PATH
 */

DIR_LIST *build_list(DIR_LIST **head, char *d)
{
	DIR_LIST *newnode, *temp;

	newnode = malloc(sizeof(DIR_LIST));
	if (!newnode || !d)
	{
	perror("hsh");
	return (NULL);
	}

	newnode->dir = d;
	newnode->next = NULL;

	if (*head == NULL)
	{
	*head = newnode;
	}

	else
	{
	temp = *head;

	while (temp->next)
	{
	temp = temp->next;
	}
	temp->next = newnode;
	}
	return (*head);
}
