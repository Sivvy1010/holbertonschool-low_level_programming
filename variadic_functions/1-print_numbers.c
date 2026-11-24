#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a newline
 * @separator: pointer to the separator string
 * @n: number of integers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printargs;
	unsigned int i = 0;
	int value;

	va_start(printargs, n);

	while (i < n)
	{
		value = va_arg(printargs, int);
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", value);
		i++;
	}
	va_end(printargs);
	printf("\n");
}
