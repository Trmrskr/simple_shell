#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "shell.h"
#include <stdio.h>

/**
 * exit_process - a function to exit a running process
 * @str: a string containing exit value
 */

void exit_process(char **cmd)
{
	int status = 0, i = 0;
	char *status_str;

	while (cmd[i] != NULL)
		i++;
	if (i > 2)
	{
		dprintf(STDERR_FILENO, "two many arguments\n");
		return;
	}
	if (i == 1)
		_exit(EXIT_SUCCESS);

	status = atoi(cmd[1]);
	_exit(status);
}
