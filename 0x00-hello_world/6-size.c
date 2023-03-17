#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character;
	int interger;
	long int longint;
	long long longlong;
	float floatint;

	printf("Size of a char: %ld byte(s)\n",sizeof(character));
	printf("Size of an int: %ld byte(s)\n",sizeof(interger));
	printf("Size of long int: %ld byte(s)\n",sizeof(longint));
	printf("Size of long long int: %ld byte(s)\n",sizeof(longlong));
	printf("Size of float: %ld byte(s)\n",sizeof(floatint));

	return (0);
}

