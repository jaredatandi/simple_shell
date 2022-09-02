#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>

/**
 * prompt - prints all arguments
 * @ac: arguments count
 * @av: null terminated array of arguments
 *
 * Return: 0 (success)
 *
 * Description: this function will print out the
 * av array passed to it without using ac
 */



int main(int argc, char **argv)
{
        char **p_line, **argp;
        int i = 1;

        p_line = parse_line(argv[1]);
        if (argc >= 2)
        {
                while (argv[i] != NULL)
                {
                        argp = parse_line(argv[i]);
                        execvp(p_line[0], argp);
                        i++;
                }
        } else
                _getline();
        return (0);
}
