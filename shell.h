#ifndef SHELL_H
#define SHELL_H

#define ARG_MAX 127

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
void parse_line(char *line, char **path, char *cmdline[]);
void exec_cmd_lines(char *path, char **cmd, char *envp[]);

#endif /* SHELL_H */
