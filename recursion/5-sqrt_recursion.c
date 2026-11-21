#include "main.h"

/**
 * find_sqrt - function to find square root of an integer
 * @a: integer to square root
 * @b: integer guess number
 * Return: returns the square root of integer
 */

int find_sqrt(int a, int b)
{
	if (a < 0)
	{
		return (-1);
	}
	else if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(a, b + 1));
	}
}

/**
 * _sqrt_recursion - square root function
 * @n: integer to square root
 * Return: returns square root of n
 */

int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 0));
}

