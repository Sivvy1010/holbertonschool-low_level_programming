#include "main.h"

/**
 * more_numbers- Prints integers 0 - 14, ten times on newlines
 * _putchar: prints value to screen
 * Return: returns nothing
 */

void more_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		int n;

		n = 0;

		while (n <= 14)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n = n + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}
