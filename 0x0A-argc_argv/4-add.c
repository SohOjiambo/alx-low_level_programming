#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: contains the program command line arguments
 *
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
