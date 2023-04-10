#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: contains the program command line arguments
 *
 * Return: 0 - success or 1 if there an error
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
