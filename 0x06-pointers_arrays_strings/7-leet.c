#include "main.h"

/**
 * leet - encodes a string into 1337
 * @x: the string to be encoded
 *
 * Return: value of x
 */

char *leet(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] == 'a' || x[i] == 'A')
		{
			x[i] = '4';
		}
		if (x[i] == 'e' || x[i] == 'E')
		{
			x[i] = '3';
		}
		if (x[i] == 'o' || x[i] == 'O')
		{
			x[i] = '0';
		}
		if (x[i] == 't' || x[i] == 'T')
		{
			x[i] = '7';
		}
		if (x[i] == 'l' || x[i] == 'L')
		{
			x[i] = '1';
		}
	}

	return (x);
}
