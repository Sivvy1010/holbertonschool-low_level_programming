#include "main.h"

/**
 * puts2 - prints every others character of a string
 * @str: pointer to string str
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		if (str[i + 1] == '\0')
		{
			break;
		}
		i += 2;
	}
	_putchar('\n');
}
