#incude "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 *Return: 0 Always (success)
 */

void print_numbers(void);
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
