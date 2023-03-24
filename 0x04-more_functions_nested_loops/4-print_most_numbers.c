#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * does not print 2 nor 4
 *
 * Return: no return.
 */

void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}

	_putchar('\n');
}
