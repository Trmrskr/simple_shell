#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * main - Entry point of program
 * @argc: number of argument passed to main
 * @argv: arguments passed to main function
 * @envp: enviornment variables passed to main function
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc, char **argv, char *envp[])
{
	int count = 0;
	ssize_t nread = 1;
	char *line = NULL, *path, *cmdname, *cmd[ARG_MAX];
	size_t len = 0;

	while (nread != -1)
	{
		count++;
		printf("$: ");
		nread = getline(&line, &len, stdin);

		if (nread == -1)
			exit(1);

		if (nread == 1)
			continue;

		parse_line(line, &path, cmd);

		exec_cmd_lines(path, cmd, envp);
	}

	free(path);
	fclose(stdin);

	return (0);
}

