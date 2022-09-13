#ifndef SHELL_H
#define SHELL_H
#include <stdlib.h>
#define LINE_SIZE 1000000

<<<<<<< HEAD
=======
typedef struct built_in_handle
{
	char *command;
	void (*built_in_func)();
} built_in;

typedef struct _paths
{
	char *path_str;
	struct _paths *next;
} path_lists;

void add_node(path_lists *path, char *path_str);
char *search_file(path_lists *path, char *file);

ssize_t shell_input(char **line, ssize_t *isaty);
void (*get_built_in(char *cmd))(char **_cmd);
>>>>>>> a7ddf9f704154b7c529a1fe6c4a316330e8d57fb

char *_strtok(char *str, const char *delim);
char *_strchr(char *s, char c);
char *str_concat(char *s1, char *s2);
int _strcmp(char *, char *);

char *check_for_path(char *path);
ssize_t parse_line(char *line, char **path, char *cmdline[]);
void exec_cmd_lines(char *path, char **cmd, char *envp[]);
void exit_process(char **);

#endif /* SHELL_H */
