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
	unsigned int i = 0, j, print_separator = 0;
	char *str;
	const char allowed_types[] = "cifs";

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (allowed_types[j])
		{
			if (format[i] == allowed_types[j])
			{
				if (print_separator)
					printf(", ");
				print_separator = 1;
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(list);
}
