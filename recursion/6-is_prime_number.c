#include "main.h"

/**
 * find_prime - function to find prime number
 * @a: value of integer
 * @div: divisor number
 * Return: 1 if a is a prime, 0 if not.
 */

int find_prime(int a, int div)
{
	if (div == a)
	{
		return (1);
	}
	else if (a % div == 0)
	{
		return (0);
	}
	else
	{
		return (find_prime(a, div + 1));
	}
}

/**
 * is_prime_number - initialize function
 * @n: value of integer
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (find_prime(n, 2));
	}
}
