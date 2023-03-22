#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: no return value
 */
void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;

			if (mult < 10)
			{
				_putchar(mult + '0')
			}
			else
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}

			if (j < 9)
			{
				_putchar(' ');

				if (i * (j + 1) < 10)
				{
					_putchar(' ');
				}
			}
		}

		_putchar('\n');
	}
}
