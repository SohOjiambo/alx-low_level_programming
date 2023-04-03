#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: a pointer to the char value
 * @to: the value set
 *
 * Return: No return
 */

void set_string(char **s, char *to)

{
	int x;

	for (x = 0; *(to + x); x++)
	{
		*(*s + x) = *(to + x);
	}
	*(*s + 1) = '\0';
}
