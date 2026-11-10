#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: pointer to string str
 */
void puts_half(char *str)
{
	int a;
	int b;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	b = (a + 1) / 2;

	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
