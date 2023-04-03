#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: substring
 *
 * Return:  pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*haystack != '\0' && *n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n == '\0' )
			return (h);
		haystack = h + 1;
	}
	return (0);
}
