#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int end_check = 1;
	char *check_ptr = (char *)&end_check;

	if (*check_ptr == 1)
		return (1);
	else
		return (0);
}
