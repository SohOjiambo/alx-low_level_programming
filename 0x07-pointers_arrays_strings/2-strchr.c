#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: a string to be searched
 * @c: character to be located
 *
 * Return: pointer to first ocurrence of c or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int p = 0;

	for (; *(s + p) != '\0'; p++)
		if (*(s + p) == c)
			return (s + p);
	if (*(s + p) == c)
		return (s + p);
	return ('\0);
}
