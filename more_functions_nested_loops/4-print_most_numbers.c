#include "main.h"

/**
 * print_most_numbers- prints numbers 1 - 9 except 2 & 4
 * _putchar: prints output of i to screen
 */

void print_most_numbers(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		if (i == '2' || i == '4')
		{
			i = i + 1;
		}
		else
		{
			_putchar(i);
			i = i + 1;
		}
	}
	_putchar('\n');
}
