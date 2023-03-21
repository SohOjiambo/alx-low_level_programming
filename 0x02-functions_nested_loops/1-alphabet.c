#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

}

/**
 * main - entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* call print_alphabet(void) function */
	print_alphabet();

	return (0);

}
