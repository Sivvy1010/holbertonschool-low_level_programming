#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of integers in variadic list
 * @n: the number of integers in the list
 * Return: returns the sum of integers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total;
	va_list arg;

	va_start(arg, n);

	i = 0;
	total = 0;

	while (i < n)
	{
		total += va_arg(arg, int);
		i++;
	}
	va_end(arg);
	return (total);
}
