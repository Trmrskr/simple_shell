#ifndef SHELL_H
#define SHELL_H

#define ARG_MAX 127

void interact(char **argv __attribute__((unused)), char *envp[]);
void non_interact(char **argv __attribute__((unused)), char *envp[]);
char *_strtok(char *str, const char *delim);
/*char *itoa(int num, int base);
void print_error(char *);
char *str_concat(char *s1, char *s2)*/
void parse_line(char *line, char **path, char *cmdline[]);
void exec_cmd_lines(char *path, char **cmd, char *envp[]);

#endif /* SHELL_H */
