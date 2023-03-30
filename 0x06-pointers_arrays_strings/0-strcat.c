#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: first string
 * @src:  second string
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src);

{
	int x = 0;
	int y = 0;

	for (x = 0; dest[x] != '\0'; x++)
	;

	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y]
		x++
	}
	dest = '\0'

	return (dest);
}
