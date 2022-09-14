#include "shell.h"
#include <stdio.h>
#include <unistd.h>

/**
 * shell_input - a function to take in input
 * @line: the variable which holds the input
 * @isaty: the flag for terminal open or close
 * Return: returns the number of character read
 */

ssize_t shell_input(char **line, ssize_t *isaty)
{
	ssize_t len = 0, nread;

	if (isatty(STDIN_FILENO))
	{
		printf("$t>>: ");
		*line = NULL;
		nread = getline(line, &len, stdin);
		*isaty = 1;
	}
	else
	{
		*line = malloc(sizeof(char) * (LINE_SIZE + 1));
		nread = read(STDIN_FILENO, *line, LINE_SIZE);
		*isaty = -1;
	}

	return (nread);
}
