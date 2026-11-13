#include <limits.h>
#include "main.h"
/**
 * _atoi- Converts a string to an integer
 * @s: pointer to the string
 * Return: returns the converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int digit;

	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
		{
			if (*s == '-')
				sign = sign * -1;
			s++;
		}
		else
		{
			break;
		}
	}
	if (*s == '\0')
		return (0);
	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (i > (INT_MAX - digit) / 10)
		{
			if (sign < 0)
				return (INT_MIN);
			else
				return (INT_MAX);
		}
		i = i * 10 + digit;
		s++;
	}
	return (i * sign);
}

