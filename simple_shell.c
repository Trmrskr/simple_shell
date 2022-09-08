#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * main - Entry point of program
 * @argc: number of argument passed to main
 * @argv: arguments passed to main function
 * @envp: enviornment variables passed to main function
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc __attribute__((unused)), char **argv, char *envp[])
{

	if (!isatty(STDIN_FILENO))
	{
		non_interact(argv, envp);
	}
	else
	{
		interact(argv, envp);
	}

	return (0);
}

