#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int lens1, lens2, i;
	int new_str_len;

	if (s1 == NULL)
		lens1 = 0;
	else
		lens1 = strlen(s1);

	if (s2 == NULL)
		lens2 = 0;
	else
		lens2 = strlen(s2);

	new_str_len = lens1 + lens2;
	new_str = (char *)malloc((sizeof(char) * new_str_len) + 1);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < new_str_len; i++)
	{
		if (i < lens1)
		{
			new_str[i] = s1[i];
		}
		else
		{
			new_str[i] = s2[i - lens1];
		}
	}
	new_str[i] = '\0';

	return (new_str);
}
