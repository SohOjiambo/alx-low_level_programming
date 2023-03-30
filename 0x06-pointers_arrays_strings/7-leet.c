#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 *
 * Return: value of s
 */

char *leet(char *s)
{
	int count = 0, i;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lowercase[i] || *(s + count) == uppercase[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
