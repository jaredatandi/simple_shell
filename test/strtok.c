#include <stdio.h>
#include <stdlib.h>

/**
 * main - commandline to av
 *
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	int i = 0;
	typedef struct str {
		char *c;
		struct str *next;
	} str_ng;

	str_ng *head, *newstr, *temp, *ptr;
	head = NULL;

	if (argc < 2)
	{
		printf("usage: %s <string> <delimiters>\n", argv[0]);
		return (-1);
	}

	newstr = malloc(sizeof(str_ng));
	while (argv[i] != NULL)
	{
		if (newstr == NULL)
		{
			perror("malloc");
			free(newstr);
		}
		if (head == NULL)
		{
			head = newstr;
			newstr->c = argv[i];
			newstr->next = NULL;
		}
		else
		{
			ptr = head;
			temp = (str_ng*)malloc(sizeof(str_ng));
			temp->c = argv[i];
			temp->next = NULL;
			while(ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = temp;
		}
		i++;
	}

	while(newstr->next != NULL)
	{
		newstr = newstr->next;
		printf("%s\n", newstr->c);
	}

	return (0);
}
