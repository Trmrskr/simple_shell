#include <stdlib.h>
#include <string.h>
#include "shell.h"

/**
 * parse_line - a function that parses the the input to the shell
 * @line: the input to be  parsed
 * @path: the path of the command entered
 * @cmdline: the command, option and argument arrays
 */

void parse_line(char *line, char **path, char *cmdline[])
{
	char *parsed_line, *pathdup, *cmdname, *option, *arg;
	int i;

	parsed_line = strtok(line, "\n");
	*path = _strtok(parsed_line, " ");
	option = _strtok(NULL, " ");
	i = 2;
	arg = _strtok(NULL, " ");

	while (arg != NULL)
	{
		cmdline[i] = arg;
		arg = _strtok(NULL, " ");
		i++;
	}
	cmdline[i] = NULL;

	pathdup = strdup(*path);
	cmdname = _strtok(pathdup, "/");

	while (cmdname != NULL)
	{
		cmdline[0] = cmdname;
		cmdname = _strtok(NULL, "/");
	}

	cmdline[1] = option;

}
