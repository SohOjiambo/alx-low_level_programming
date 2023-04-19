#include "3-calc.h"
#include <stdio.h>
#include <stlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*oprn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	oprn = get_op_func(argv[2]);
	if (oprn == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", o(a, b));

	return (0);
}
