#include "main.h"
#include <stdio.h>

/**
 * main - test getenv function
 *
 * Return: 0 always
 */
int main(void)
{
        char *name, *res = NULL;
        name = "PATH";

        res = getenv_value(name);

        if (res == NULL)
        {
                printf("a null answer\n");
                return (-1);
        }

        printf("%s\n", res);

        return (0);
}
