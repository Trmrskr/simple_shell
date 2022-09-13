#include <fcntl.h>
#include <sys/stat.h>
#include "shell.h"

/**
 * check_for_path - a function to check if path exists
 * @path: the path or command to check for
 * Return: 1 if path, -1 otherwise.
 */
char *check_for_path(char *path)
{
	struct stat st;
	char *_pth = "/usr/bin/", *full_path;

	if (path[0] != '/')
		full_path = str_concat(_pth, path);
	else
		full_path = path;

	if (stat(full_path, &st) == 0 && st.st_mode & S_IXUSR)
		return (full_path);

	return (NULL);
}
