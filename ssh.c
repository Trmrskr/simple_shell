#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - the entry point to the program
 * Return: 0 on success
 */

int main(void)
{
	int count = 0, i = 0;
	char *line = NULL, *_line, *path, *cmd[LINE_SIZE];
	void (*built_in)();
	size_t len = 0, nread, isaty;

	nread = shell_input(&line, &isaty);

	while (nread != -1)
	{
		count++;
		if (parse_line(line, &path, cmd) == -1)
		{
			built_in = get_built_in(cmd[0]);
			if (built_in != NULL)
				built_in(cmd);
			else
				perror("stat");
		}
		else
			exec_cmd_lines(path, cmd, environ);

		if (isaty == -1)
			break;

		fflush(stdin);
		printf("$t>>: ");
		nread = getline(&line, &len, stdin);
	}

	free(path);
	fclose(stdin);
}
