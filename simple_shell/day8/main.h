#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

char *read_line(void);
char **spilt_line(char *new_line);
int exec(char **args, char *path);
extern char **environ;
char *get_path(char *user_command);

#endif
