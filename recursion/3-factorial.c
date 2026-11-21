#include "main.h"

/**
 * factorial - factorial function to call
 * @n: the given number
 * Return: returns -1 if number is below zero, otherwise factorial of number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
