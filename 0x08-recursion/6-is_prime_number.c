#include "main.h"

/**
 * prime_check - checks for prime numbers
 * @n: base number
 * @x: iterator
 *
 * Return: 1 or 0
 */

int prime_check(unsigned int n, unsigned int x)
{
	if (n % x == 0)
	{
		if (n == 0)
			return (1);
	}
	else
		return (0);
}

/**
 * is_prime_number - checks for prime number
 * @n: input intger
 *
 * Return: 1 if integer or 0 if not
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (1);
	return (prime_check(n, 2));
}
