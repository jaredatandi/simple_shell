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
        char **p_line;
        if (argc >= 2)
        {
                p_line = parse_line(argv[1]);
                execvp(p_line[0], p_line);
        } else
                _getline();
        return (0);
}
