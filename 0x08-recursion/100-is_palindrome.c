#include "main.h"

/**
 * StrLen - checks length of a string
 * @s: string being checked
 *
 * Return: the length of a string
 */

int StrLen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + StrLen(s + 1));
}

/**
 * StrFind - compares characters in a string
 * @s: string to be checked
 * @x: first iterator
 * @y: second iterator
 *
 * Return: comparison output
 */

int StrFind(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 1)
			return (1);
		return (0 + StrFind(s, x + 1, y - 1));
	}
	return (0);
}


/**
 * is_palindrome - checks for a palindrome
 * @s: string to be checked
 *
 * Return: 1 if palindrome 0 if not.
 */

int is_palindrome(char *s)

{
	if (*s == '\0')
		return (1);
	return (StrFind(s, 0, StrLen(s) - 1));
}
