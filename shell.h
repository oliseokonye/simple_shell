#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <stddef.h>

#define MAXIMUM_LINE 1024


int main(int argc, char **argv);

int set_environment(char **tokz);
int unset_environment(char **tokz);
int built_in(char **tokz_array);
extern char **environ;
ssize_t echo_cmd(char **ln, size_t *neto);
void str_spl(char *string);
int suenv(void);
void exe(char **tokz);
char *pathfinder(const char *locate);
#endif
