#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>

extern char **environ;


typedef struct PATH
{
	const char *dir;
	struct PATH *next;
} DIR_LIST;

char **_strtok(const char *str, char *delim);
char **_getline(void);
pid_t pid(void);
int _execve(char **argv);
int prompt(int argc, char **argv);
void _printenv(void);
char *getenv_value(const char *name);
char **getenv_dir(const char *name);
char **parse_line(char *line);
DIR_LIST *build_list(DIR_LIST *head, char *dir);

#endif
