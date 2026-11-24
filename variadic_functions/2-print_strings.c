#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings followed by a newline
 * @separator: pointer to separator to print
 * @n: number of strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptarg;
	unsigned int i = 0;
	char *value;

	va_start(ptarg, n);

	while (i < n)
	{
		value = va_arg(ptarg, char *);
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		if (value == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", value);
		}
		i++;
	}
	va_end(ptarg);
	printf("\n");
}
