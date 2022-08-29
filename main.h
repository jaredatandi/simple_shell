#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>

typedef struct builtin {
	char *c;
	int (*func)(char **);
} builtin_f;


void show_prompt(void);
void print_dir(void);
char **parse_data(char *line);
int launch(char **argv);
char *read_line(void);

int hsh_cd(char **argv);
int hsh_exit(char **argv);
int hsh_help(char **argv);

#endif
