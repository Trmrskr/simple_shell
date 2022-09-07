#include <stdlib.h>
#include <string.h>

/**
 * parse_line - a function that parses the the input to the shell
 * @path: the path of the command entered
 * @cmdline: the command, option and argument arrays
 */

void parse_line(char *line, char **path, char *cmdline[])
{
	char *parsed_line, *pathdup, *cmdname, *option, *arg;
	int i;

	parsed_line = strtok(line, "\n");
	*path = strtok(parsed_line, " ");
	option = strtok(NULL, " ");
	i = 2;
	arg = strtok(NULL, " ");

	while (arg != NULL)
	{
		cmdline[i] = arg;
		arg = strtok(NULL, " ");
		i++;
	}
	cmdline[i] = NULL;
	
	pathdup = strdup(*path);
	cmdname = strtok(pathdup, "/");

	while (cmdname != NULL)
	{
		cmdline[0] = cmdname;
		cmdname = strtok(NULL, "/");
	}

	cmdline[1] = option;

}
