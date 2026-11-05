#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: The number of times to print the backslash
 */

void print_diagonal(int n)
{
	int row;
	int spaces;

	row = 0;

	while (row < n)
	{
		spaces = 0;
		while (spaces < row)
		{
			_putchar(' ');
			spaces = spaces + 1;
		}
		_putchar('\\');
		_putchar('\n');
		row = row + 1;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
