#include <stdlib.h>
#include <stdio.h>
#include "shell.h"

/**
 * add_node - a function that adds a node to a list
 * @path: the head of the list
 * @path_str: the path to be added to the list
 */

void add_node(path_lists *path, char *path_str)
{
	path_lists *new_node = malloc(sizeof(path_lists));

	if (new_node == NULL)
	{
		printf("Error: failed to create new node\n");
		return;
	}

	new_node->path_str = path_str;
	new_node->next = NULL;

	if (path == NULL)
	{
		path = new_node;
		return;
	}

	while (path->next != NULL)
	{
		path = path->next;
	}

	path->next = new_node;
}
