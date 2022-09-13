#include "shell.h"
#include <stdio.h>
#include <unistd.h>

ssize_t shell_input(char **line, ssize_t *isaty)
{
	ssize_t len = 0, nread;
	if (isatty(STDIN_FILENO))
	{
		printf("$>>: ");
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
