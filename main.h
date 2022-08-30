#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>

/**
 * struct builtin - a struct of the functions to call
 * @ch: a string command
 * @func: a function pointer to the funciton to
 * select
 */
typedef struct builtin
{
	char *ch;
	int (*func)(char **);
} builtin_f;

int (*builtin_func(char *s))(char **);


void show_prompt(char **argv, char **env);
int print_dir(char **args);
char **parse_data(char *line, char *delim);
int launch(char **argv);
char *read_line(void);
char *get_environ(char **environ, char *var);

int hsh_cd(char **argv);
int hsh_exit(char **argv);
int hsh_help(char **argv);
int hsh_clear(char **argv);
int hsh_error(char **argv);

#endif
