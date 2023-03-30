#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @x: string to be encoded
 *
 * Return: value of x
 */

char *rot13(char *x)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(x + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(x + count) == alphabet[i])
			{
				*(x + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (x);
}
