#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * exec_cmd_lines - a function that executes command
 * @path: the path of the command
 * @cmd: the array of command option and arguments
 * @environ: the environment variable
 */

void exec_cmd_lines(char *path, char **cmd, char **environ)
{
	pid_t cpid, wpid;
	int status;

	cpid = fork();

	if (cpid == -1)
	{
		perror("Fork: ");
		return;
	}
	if (cpid == 0)
	{
		if (execve(path, cmd, environ) == -1)
		{
			perror("execve");
			return;
		}
	}
	else
	{
		wpid = waitpid(-1, &status, 0);
		if (wpid == -1)
		{
			perror("waitpid: ");
			return;
		}
	}
}
