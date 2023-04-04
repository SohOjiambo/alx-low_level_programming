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
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += *(a + x * size + x);
		sum2 += *(a + x * size + (size - 1 - x));
	}
	printf("%d, %d\n", sum1, sum2);
}
