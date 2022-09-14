#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shell.h"

/**
 * parse_line - a function that parses the the input to the shell
 * @line: the input to be  parsed
 * @path: the path of the command entered
 * @cmdline: the command, option and argument arrays
 * Return: 1 if path exist and -1 otherwise
 */

ssize_t parse_line(char *line, char **path, char *cmdline[])
{
	char *parsed_line, *_pth, *pathdup, *cmdname, *option_arg;
	int i;

	parsed_line = _strtok(line, "\n");
	_pth = _strtok(parsed_line, " ");

	*path = check_for_path(_pth);
	option_arg = _strtok(NULL, " ");
	i = 1;

	while (option_arg != NULL)
	{
		cmdline[i] = option_arg;
		option_arg = _strtok(NULL, " ");
		i++;
	}
	cmdline[i] = NULL;

	pathdup = strdup(_pth);
	cmdname = _strtok(pathdup, "/");
	while (cmdname != NULL)
	{
		cmdline[0] = cmdname;
		cmdname = _strtok(NULL, "/");
	}
	if (*path == NULL)
	{
		return (-1);
	}

	return (1);
/*	free(pathdup), free(cmdname), free(option), free(arg);*/
}
