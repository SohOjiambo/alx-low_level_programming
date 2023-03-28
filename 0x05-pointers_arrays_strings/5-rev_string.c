#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char to be checked
 *
 * Return : no return
 */

void rev_string(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	for (int i = 0; i < length / 2; i++)
	{
		char temp = *(s + i);
		*(s + i) = *(s + length - i - 1);
		*(s + length - i - 1) = temp;
	}
}
