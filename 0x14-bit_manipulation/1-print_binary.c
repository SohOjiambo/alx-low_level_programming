#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be printed
 *
 * Return: No return
 */

void print_binary(unsigned long int n)
{
	unsigned long int msk = 1;
	int bt = sizeof(unsigned long int) * 8 - 1;

	while (bt--)
	{
		if (n & (msk << bt))
			break;
	}
	while (bt >= 0)
	{
		if (n & (msk << bt))
			_putchar('1');

		else
			_putchar('0');

		bt--;
	}
}
