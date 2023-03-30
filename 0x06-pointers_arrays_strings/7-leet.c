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
		while (x[i] == 'a' || s[i] == 'A')
			x[i] = '4';
		while (x[i] == 'e' || s[i] == 'E')
			x[i] = '3';
		while (x[i] == 'o' || s[i] == 'O')
			x[i] = '0';
		while (x[i] == 't' || s[i] == 'T')
			x[i] = '7';
		while (x[i] == 'l' || s[i] == 'L')
			x[i] = '1';
	}

	return (x);
}
