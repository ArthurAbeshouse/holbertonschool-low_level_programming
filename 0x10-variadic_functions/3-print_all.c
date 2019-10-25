#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_int - prints integers
 * @arg: va_list type
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * print_char - prints chars
 * @arg: va_list type
 */

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * print_float - prints floats
 * @arg: va_list type
 */

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * print_string - prints strings
 * @arg: va_list type
 */

void print_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);
	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
/**
 * print_all - prints any argument passed into it
 * @format: formats symbols in order
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *separator;
	va_list arg;
	pt types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(arg, format);
	i = 0;
	separator = "";
	while (format && format[i])
	{
		j = 0;
		while (types[j].test != NULL)
		{
			if (format[i] == types[j].test[0])
			{
				printf("%s", separator);
				types[j].printer(arg);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
