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
	int a, b, c, len = 0;
	char *count;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			len++;
		len++;
	}
	count = malloc(sizeof(char) * count + 1);

	if (count == NULL)
		return (NULL);

	c = 0;
	for (c = 0; c < ac; c++)
	{
		for (b = 0; ac[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		count[c] = '\n';
		c++
	}
	count[k] = '\0';

	return (count);
}
