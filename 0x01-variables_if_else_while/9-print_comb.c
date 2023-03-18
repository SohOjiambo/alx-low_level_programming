#include <stdio.h>

/**
 * main - prints possible combinations of single digits numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)

	{
		putchar((num % 10) + '0');
		if (num ==9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
