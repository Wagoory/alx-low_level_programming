#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

char *get_line();
char **token(char *user_command);
void freearr(char **free_arg);
void execute(char **exev);
extern char **environ;
#endif
