#include "main.h"

/**
 * _isdigit- Initializes function
 * @c: stores integer value
 * Return: returns 1 for a digit and 0 is c is not a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
