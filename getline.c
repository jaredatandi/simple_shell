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
	char *line = NULL, buf[1024], **p_line, *path, **args;
	pid_t c_pid;
	DIR_LIST *head;
	int j = 0;

	for (;;)
	{
		write(2, "$ ", 2);
		line = fgets(buf, sizeof(buf), stdin);
		if (!(line))
		{
			write(2, "EOF\n", 4);
			exit(0);
		}

		p_line = parse_line(line);
		while (p_line[j] != NULL)
		{
			printf("%s\n", p_line[j]);
			j++;
		}
		head = create_list();
		if (head == NULL)
			perror("dir");
		path = _which(p_line[0], head);
		if (!path)
		{
			perror("path");
			return (NULL);
		}
		if (!p_line[0])
			continue;
		p_line[0] = path;
		args = create_args(p_line);

		switch (c_pid = fork())
		{
			case -1:
				perror("fork");
				break;
			case 0:
				if (execve(p_line[0], args, environ) == -1)
				{
					perror("execve");
					return (NULL);
				}
				break;
			default:
				waitpid(c_pid, NULL, 0);
		}
	}

	return (p_line);
}
