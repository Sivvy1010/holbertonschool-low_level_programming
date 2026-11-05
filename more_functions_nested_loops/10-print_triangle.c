#include "main.h"

/**
 * print_triangle - prints a right triangle
 * @size: the height and width of the triangle
 */

void print_triangle(int size)
{
	int rows;
	int spaces;
	int sn;
	int hashes;
	int hn;

	rows = 0;

	while (rows < size)
	{
		spaces = 0;
		sn = size - rows - 1;
		while (spaces < sn)
		{
			_putchar(' ');
			spaces = spaces + 1;
		}
		hashes = 0;
		hn = rows + 1;
		while (hashes < hn)
		{
			_putchar('#');
			hashes = hashes + 1;
		}
		_putchar('\n');
		rows = rows + 1;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
