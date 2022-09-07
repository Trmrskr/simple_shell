#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

/**
 * exec_cmd_lines - a function that executes command
 * @path: the path of the command
 * @cmd: the array of command option and arguments
 * @envp: the environment variable
 */

void exec_cmd_lines(char *path, char **cmd, char *envp[])
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
		if (execve(path, cmd, envp) == -1)
		{
			perror("exece");
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
