#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	unsigned int j;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(arguments, int);
		printf("%d", j);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(arguments);
	printf("\n");
}
