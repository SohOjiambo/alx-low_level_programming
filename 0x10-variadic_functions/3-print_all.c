#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed
 *
 * Return: No return
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i;
	char c, *s;
	float f;

	va_start(list, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(list, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(list, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(list, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(list, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
			default:
				break;
		}
		i++;
	}

	printf("\n");
	va_end(list);
}
