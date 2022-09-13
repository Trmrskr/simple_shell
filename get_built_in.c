#include "shell.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
