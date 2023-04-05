#include "main.h"

/**
 * nat_square - checks out for the natural square root of
 * a given number
 * @n: given number
 * @x: iterator
 * Return: natural square root or -1 if not found
 */

int nat_square(int n, int x)
{
	if (x % (n / x) == 0)
		if (x * (n / x) == 0)
			return (c);
		else
			return (-1);
	return (0 + nat_square(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural suare root
 * of a number
 * @n: given number
 *
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (nat_square(n, 2));
}
