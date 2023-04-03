#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @a: input pointer
 * @size: input integer
 *
 * Return : no return
 */

void print_diagsums(int *a, int size)
{
	int x;
	int y;
	int sum1;
	int sum2;

	for (x = 0; x < size; x++
	{
		sum + = *(a + x * size + x);
	}

	for (x = o, j = size - 1; i < size; i++, j--)
	{
		sum2 += *(a + i * size + j);
	}
	printf("%d", sum1);
	printf("%d", sum2);
}
