#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input
 *
 * Return: no return
 */

void print_chessboard(char (*a)[8]);
{
	int j;
	int l = 0;

	for (j = 0; j < 64; j++)
	{
		if (j % 8 == 0 && j != 0)
		{
			l = j;
			_putchar('\n');
		}
		_putchar(a[j / 8][j - m]);
	}
	_putchar('\n');
}
