#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a char
 * @list: argument list
 */
void print_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	printf("%c", c);
}

/**
 * print_integer - prints an integer
 * @list: argument list
 */
void print_integer(va_list list)
{
	int i;

	i = va_arg(list, int);
	printf("%d", i);
}

/**
 * print_float - prints a float
 * @list: argument list
 */
void print_float(va_list list)
{
	float f;

	f = va_arg(list, double);
	printf("%f", f);
}

/**
 * print_string - prints a string
 * @list: argument list
 */
void print_string(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed
 *
 * Return: No return
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 0;
	char *separator = "";

	print_fn_t print_fn[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (print_fn[j].type)
		{
			if (format[i] == print_fn[j].type)
			{
				printf("%s", separator);
				print_fn[j].func(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(list);
}
