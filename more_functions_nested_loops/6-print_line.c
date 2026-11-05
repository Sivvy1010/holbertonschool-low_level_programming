#include "main.h"

/**
 * print_line- print lines to output
 * @n: Stored integar
 * _putchar: prints _ to value of n
 */

void print_line(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		_putchar('_');
		i = i + 1;
	}
	_putchar('\n');
}
