#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *prt;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	prt = malloc(nmemb * size);

	if (prt == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		prt[i] = 0;

	return (prt);
}
