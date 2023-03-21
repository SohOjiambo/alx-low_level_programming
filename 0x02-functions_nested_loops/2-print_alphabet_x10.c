#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10  times
 *
 * Return void
 */

void print_alphabet_x10(void)

{
	int i;
	char ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		if (i != 10)
		{
			_putchar('\n');
		}
	}

}
