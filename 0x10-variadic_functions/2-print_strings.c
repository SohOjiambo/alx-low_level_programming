#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between strings
 * @n: the number of strings passed to the function
 *
 * Return: No return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*);
		if (str == NULL)
			printf("(Nil)");
		else
			printf("%s", str);
		if (i < n - 1) 
			if (separator)
				printf("%s", separator);
	}
	printf("\n");

	va_end(list);

}
