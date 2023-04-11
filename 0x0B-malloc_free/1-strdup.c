#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory.
 * @str: a type of char
 *
 * Return: a pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int p, y;

	if (str == NULL)
		return (NULL);

	for (p = 0; str[p] != '\0'; p++)
		;
	new_str = (char *)malloc(sizeof(char) * p + 1);

	if (new_str == NULL)
		return (NULL);

	for (y = 0; y <= p; y++)
	new_str[y] = str[y];

	return (new_str);
}
