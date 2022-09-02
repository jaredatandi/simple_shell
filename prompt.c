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
        if (argc >= 2)
        {
                execvp(argv[1], argv);
                printf("here");
        }
        else
                _getline();
        return (0);
}
