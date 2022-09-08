#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>

extern char **environ;

/**
 * struct PATH - a struct to stor the
 * every dir in path as a node
 * @dir: the directory name
 * @next: the link to the next dir
 */


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
char *_which(char *name, DIR_LIST *head);
DIR_LIST *build_list(DIR_LIST **head, char *dir);
DIR_LIST *create_list();

#endif
