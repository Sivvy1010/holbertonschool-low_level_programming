#include "main.h"

/**
 * times_table- Initialize function to print times table
 * _putchar: prints values
 */

void times_table(void)
{
	int row;

	row = 0;

	while (row <= 9)
	{
		int col;

		col = 0;

		while (col <= 9)
		{
			int i;

			i = row * col;

			if (i < 10)
			{
				if (col > 0)
				{
					_putchar (' ');
				}
				_putchar ('0' + i);
			}
			else
			{
				_putchar ('0' + i / 10);
				_putchar ('0' + i % 10);
			}
			if (col < 9)
			{
				_putchar (',');
				_putchar (' ');
			}
			col = col + 1;
		}
		_putchar ('\n');
		row = row + 1;
	}
}
