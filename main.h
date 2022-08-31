#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>

char **_strtok(char *str, char *delim);
int _getline(void);
pid_t pid(void);
int _execve(void);

#endif
