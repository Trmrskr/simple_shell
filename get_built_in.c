#include "shell.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_built_in - a functionpointer that matches built in commands to function
 * @cmd: input to function pointer
 * @cmd: an array of command passed to returned function
 * Return: a function if found or NULL otherwise
 */

void (*get_built_in(char *cmd))(char **_cmd)
{
	int i;

	built_in bf[] = {
		{"exit", exit_process}
	};

	i = 0;
	while (bf[i].command)
	{
		if (_strcmp(bf[i].command, cmd) == 0)
			return (bf[i].built_in_func);
		i++;
	}

	return (NULL);
}
