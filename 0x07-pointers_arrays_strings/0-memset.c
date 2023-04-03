#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s : pointer to a memory location
 * @b : value to be set
 * @n : assigned bytes to the set value
 *
 * Return: the pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	*(s + p) = b;

	return (s);
}
