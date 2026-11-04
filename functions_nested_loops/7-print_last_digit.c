#include "main.h"

/**
 * print_last_digit- Initialize function to print last digit
 * @n: takes integar value
 * _putchar: prints value of x
 * Return: returns last digit value
 */

int print_last_digit(int n)
{
	int x;

	n = n % 10;
	x = n;

	if (x < 0)
	{
		x = -x;
	}
	_putchar('0' + x);
	return (x);
}
