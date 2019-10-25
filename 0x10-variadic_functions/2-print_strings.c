#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: const char type pointer to string between numbers
 * @n: number of items to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *test;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		test = va_arg(arguments, char*);
		if (test)
			printf("%s", test);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(arguments);
	printf("\n");
}
