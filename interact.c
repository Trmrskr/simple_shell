#include "shell.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * interact - the function used to run interactive mode for shell
 */

void interact(char **argv, char *envp[])
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
}
