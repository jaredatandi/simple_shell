#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>
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
int exec_args(char **argv);
char *read_line(void);
char *get_environ(char *var);
char **get_path(char **env);
char *create_path(char **args, char **tokens);
void check_sig(int sig);
void check_EOF(int n, char *buf);
void check_isatty(void);

int hsh_cd(char **argv);
int hsh_exit(char **argv);
int hsh_help(char **argv);
int hsh_clear(char **argv);
int hsh_error(char **argv);

#endif
