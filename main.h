#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>

extern char **environ;


char **_strtok(char *str, char *delim);
int _getline(void);
pid_t pid(void);
int _execve(char **argv);
int prompt(int argc, char **argv);
void _printenv(void);
#endif
