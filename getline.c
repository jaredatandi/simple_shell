#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * _getline - prints "$ " and wait for the user to enter
 * a command, prints it in the next line
 *
 * @ac: arguments count
 *
 * Return: 0 sucess
 */
char **_getline(void)
{
	char *line = NULL, buf[512];
        char **p_line;
        pid_t c_pid;

        for (;;)
        {
                write(2, "$ ", 2);
                if (!(line = fgets(buf, sizeof(buf), stdin)))
                {
                        write(2, "EOF\n", 4);
                        exit (0);
                }

                p_line = parse_line(line);
                if (!p_line[0])
                        continue;

                switch (c_pid = fork())
                {
                        case -1:
                                perror("fork");
                                break;
                        case 0:
                                _execve(p_line);
                                break;
                        default:
                                waitpid(c_pid, NULL, 0);
                }
        }
                


        return (p_line);
}
