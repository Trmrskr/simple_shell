#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * non_interact - a function that is called on non-interactive mode
 * @envp: the environment variable from main function
 */

void non_interact(char **argv __attribute__((unused)), char *envp[])
{
	int r;
	char line[4096];
	char *path, *cmd[ARG_MAX];
	
	r = read(STDIN_FILENO, line, 4096);
		
	if (r == -1)
	{
		perror("Error: ");
		exit(0);
	}
	
	parse_line(line, &path, cmd);
	exec_cmd_lines(path, cmd, envp);
}
