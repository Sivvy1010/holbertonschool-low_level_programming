#include "main.h"

/**
 * _isupper- Initializes function
 * @c: holds integer value
 * Return: returns 0 is c is lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
