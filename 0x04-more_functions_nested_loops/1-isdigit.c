#incude "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 *@c: is the character being checked
 *
 *Return: 1 if uppercase 0 if otherwise
 */

int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
