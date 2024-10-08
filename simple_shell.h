#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>


/* Function prototypes */
void prompt(void);
void execute_command(char *input);
char **parse_input(char *input);
char *find_command(char *command);
void print_env(void);
char *find_command_in_path(char *command);
void handle_exit(void);
#endif /* SIMPLE_SHELL_H */

