#include "main.h"
/**
 * print_square - prints square lines
 * @size: the number of times # are printed
 */

void print_square(int size)
{
	int row;

	int spaces;

	row = 0;

	while (row < size)
	{
		spaces = 0;
		while (spaces < size)
		{
			_putchar('#');
			spaces = spaces + 1;
		}
		_putchar('\n');
		row = row + 1;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

