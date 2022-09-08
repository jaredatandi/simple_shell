#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * _getline - prints "$ " and wait for the user to enter
 * a command, prints it in the next line
 *
 * Return: 0 success
 */
char **_getline(void)
{
	char *line = NULL;
	char buf[1024];
	char **p_line;
	pid_t c_pid;
	DIR_LIST *head;
	char *path;

	for (;;)
	{
		write(2, "$ ", 2);
		if (!(line == fgets(buf, sizeof(buf), stdin)))
		{
			write(2, "EOF\n", 4);
			exit(0);
		}

		p_line = parse_line(line);
		head = create_list();
		path = _which(p_line[0], head);

		if (!p_line[0])
			continue;
		printf("%s: path\n", path);
		p_line[0] = path;

		switch (c_pid = fork())
		{
			case -1:
				perror("fork");
				break;
			case 0:
				printf("%s first\n", p_line[0]);
				execve(p_line[0], p_line, environ);
				break;
			default:
				waitpid(c_pid, NULL, 0);
		}
	}

	return (p_line);
}
