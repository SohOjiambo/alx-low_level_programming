#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, len = 0;
	char *count;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			len++;
		len++;
	}
	count = malloc(sizeof(char) * (len + 1));

	if (count == NULL)
		return (NULL);

	for (c = 0, a = 0; c < ac; a++)
	{
		for (b = 0; av[c][b] != '\0'; b++)
		{
			count[c] = av[c][b];
			c++;
		}
		count[c] = '\n';
		c++;
	}
	count[c] = '\0';

	return (count);
}
