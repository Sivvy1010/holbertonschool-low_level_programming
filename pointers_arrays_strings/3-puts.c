#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: pointer to str
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
